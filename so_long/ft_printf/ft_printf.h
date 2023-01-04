/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maksoy <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 01:36:39 by maksoy            #+#    #+#             */
/*   Updated: 2022/10/13 01:36:42 by maksoy           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <limits.h>
# include <stdio.h>

int	ft_printf(const char *str, ...);
int	ft_putbase(long double n, char c, int b);
int	ft_putnbr(int nbr);
int	ft_putstr(char *str);
int	ft_putchar(char c);
int	ft_format(char c, va_list arg);

#endif
