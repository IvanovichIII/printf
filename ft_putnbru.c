/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbru.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:33:11 by ivan              #+#    #+#             */
/*   Updated: 2024/04/30 17:33:14 by ivan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbru(unsigned int nbr)
{
	int	n;

	n = 0;
	if (nbr > 9)
	{
		n += ft_putnbru(nbr / 10);
	}
	return (n += ft_putchar(nbr % 10 + '0'));
}