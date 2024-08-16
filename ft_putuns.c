/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuns.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtinani- <marvin@42.fr>                   +#+  +:+       +#+         */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 18:17:35 by guilherme         #+#    #+#             */
/*   Updated: 2024/07/01 18:31:44 by guilherme        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putuns(unsigned int nb)
{
	int	c;

	c = 0;
	if (nb > 9)
		c += ft_putnbr(nb / 10);
	c += ft_putchar(nb % 10 + 48);
	return (c);
}
