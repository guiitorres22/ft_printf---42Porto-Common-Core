/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtinani-  <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 18:51:52 by guilherme         #+#    #+#             */
/*   Updated: 2024/06/28 19:05:14 by guilherme        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	c;

	c = 0;
	if (!str)
		c += ft_putstr("(null)");
	else
	{
		while (str[c])
		{
			ft_putchar(str[c]);
			c++;
		}
	}
	return (c);
}
