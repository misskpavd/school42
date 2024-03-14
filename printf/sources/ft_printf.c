/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvan-don <kvan-don@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 11:02:56 by kvan-don          #+#    #+#             */
/*   Updated: 2024/03/14 14:58:09 by kvan-don         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_format(va_list var, char *str, size_t count)
{
	if (*str == 'c')
		ft_putchar_pf(va_arg(var, int) count);
	else if (*str == 's')
		ft_putstr_pf(va_arg(var, char*) count);
	else if (*str == 'p')
		ft_putptr_pf(va_arg(var, void *) count);
	else if (*str == 'i' || *str == 'd')
		ft_putnbr_pf(va_arg(var, int) count);
	else if (*str == 'u')
		ft_putuint_pf(va_arg(var, unsigned int) count);
	else if (*str == 'x')
		ft_puthex_pf(va_arg(var, unsigned int) count, x);
	else if (*str == 'X')
		ft_puthex_pf(va_arg(var, unsigned int) count, X);
	else if (*str == '%')
		ft_putchar_pf(*str, count);
}

int	ft_printf(const char *str, ...)
{
	va_end	var;
	size_t	count;

	if (!str)
		return (0);
	count = 0;
	va_start(var, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			ft_format(va, (char *)str, &counter);
		}
		else
			ft_putchar_pf(*str, &counter);
		str++;
	}
	va_end(var);
	return (count);
}
