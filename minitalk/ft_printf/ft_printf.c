/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maksoy <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 19:03:32 by maksoy            #+#    #+#             */
/*   Updated: 2022/03/07 23:51:59 by maksoy           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(char c, va_list arg)
{
	int			i;

	i = 0;
	if (c == 'c')
		i += ft_putchar(va_arg(arg, int));
	else if (c == 's')
		i += ft_putstr(va_arg(arg, char *));
	else if (c == 'd' || c == 'i')
		i += ft_putbase(va_arg(arg, int), c, 10);
	else if (c == 'u')
		i += ft_putbase(va_arg(arg, unsigned int), c, 10);
	else if (c == 'x' || c == 'X')
		i += ft_putbase(va_arg(arg, unsigned int), c, 16);
	else if (c == 'p')
	{
		i += ft_putstr("0x");
		i += ft_putbase(va_arg(arg, unsigned long int), c, 16);
	}
	else if (c == '%')
		i += ft_putchar('%');
	return (i);
}

int	ft_printf(const char *str, ...)
{
	int		count;
	int		i;
	va_list	arg;

	i = 0;
	count = 0;
	va_start(arg, str);
	while (str[count])
	{
		if (str[count] == '%')
		{
			i += ft_format(str[++count], arg);
			count++;
		}
		else
			i += ft_putchar(str[count++]);
	}
	return (i);
}

/*
int main(void)
{
	ft_printf("mert %s %d","berkay"); // ekran çıktısı
	ft_printf("\n");

	int i= 0;
	int j = 0;
	i = ft_printf("mert %s %d","berkay");
	j = ft_printf("%d",i);
	ft_printf("%d",j); //ekran çıktısı
	ft_printf("\n");

	ft_printf("%12345"); //ekran çıktısı
	ft_printf("\n");

	ft_printf("%%123%1%%%"); //ekran çıktısı
	ft_printf("\n");
}
*/
