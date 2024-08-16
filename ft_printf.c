/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtinani-  <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 18:38:08 by guilherme         #+#    #+#             */
/*   Updated: 2024/07/18 13:40:29 by gtinani-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	format_specifier(char spec, va_list arg)
{
	int	c;

	c = 0;
	if (spec == 'c')
		c += ft_putchar(va_arg(arg, int));
	else if (spec == 's')
		c += ft_putstr(va_arg(arg, char *));
	else if (spec == 'p')
		c += ft_putpointer(va_arg(arg, unsigned long));
	else if (spec == 'i' || spec == 'd')
		c += ft_putnbr(va_arg(arg, int));
	else if (spec == 'u')
		c += ft_putuns(va_arg(arg, unsigned int));
	else if (spec == 'x')
		c += ft_puthex(va_arg(arg, unsigned int), 'x');
	else if (spec == 'X')
		c += ft_puthex(va_arg(arg, unsigned int), 'X');
	else if (spec == '%')
		c += ft_putchar('%');
	return (c);
}

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int		c;

	c = 0;
	va_start(arg, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				return (-1);
			c += format_specifier(*format, arg);
		}
		else
		{
			c += ft_putchar(*format);
		}
		++format;
	}
	va_end(arg);
	return (c);
}
/*
int main()
{
	ft_printf("csupidxX%");	
	printf("\ncsupidxX%\n");
	
}*/

/*
int main()
{
	int	str;
	
	str = ft_printf("%");
	
	ft_printf("%d", str );
		
	str = printf("%");
	
	printf("%d", str );
	
	return (0);
}
*/
/*int main()
{
	ft_printf(" %% ");
	ft_printf(" %%%% ");
	ft_printf(" %% %% %% ");
	ft_printf(" %%  %%  %% ");
	ft_printf(" %%   %%   %% ");
	ft_printf("%%");
	ft_printf("%% %%");

	write(1,"\n", 1);
	write(1,"original", 10);

	printf(" %% ");
	printf(" %%%% ");
	printf(" %% %% %% ");
	printf(" %%  %%  %% ");
	printf(" %%   %%   %% ");
	printf("%%");
	printf("%% %%");
}
*/
/*
int main(void)
{
    char c = 'A';
    char *str = "Hello, World!";
    int d = 1234;
    unsigned int u = 5678;
    void *p = &d;
    unsigned int x = 255;

    ft_printf("Teste com caractere %c: %c\n", c, c);
	ft_printf("Teste com string %s: %s\n", str, str);
	ft_printf("Teste com ponteiro %p: %p\n", p, p);
    ft_printf("Teste com inteiro %d: %d\n", d, d);
    ft_printf("Teste com inteiro %i: %i\n", d, d); // %i igual o %d
    ft_printf("Teste com inteiro sem sinal %u: %u\n", u, u);
    ft_printf("Teste int sem sinal em Hexadecimal %x: %x\n", x, x);
    ft_printf("Teste int sem sinal em Hexadecimal %X: %X\n", x, x);
    ft_printf("Teste sinal literal %%: %%\n");

    return 0;
}*/
