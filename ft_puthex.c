/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtinani-  <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 11:53:10 by guilherme         #+#    #+#             */
/*   Updated: 2024/07/01 12:26:27 by guilherme        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long nb, char str)
{
	char	*hex;
	int		c;

	c = 0;
	if (str == 'X')
		hex = "0123456789ABCDEF";
	else if (str == 'x')
		hex = "0123456789abcdef";
	if (nb >= 16)
	{
		c += ft_puthex(nb / 16, str);
		c += ft_puthex(nb % 16, str);
	}
	else if (nb < 16)
		c += ft_putchar(hex[nb]);
	return (c);
}
