/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtinani-  <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 11:30:54 by guilherme         #+#    #+#             */
/*   Updated: 2024/07/01 11:52:48 by guilherme        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putpointer(unsigned long str)
{
	size_t	c;

	c = 0;
	if (!str)
		return (ft_putstr("(nil)"));
	c += ft_putstr("0x");
	c += ft_puthex(str, 'x');
	return (c);
}
