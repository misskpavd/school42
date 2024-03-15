/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvan-don <kvan-don@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:37:56 by kvan-don          #+#    #+#             */
/*   Updated: 2024/03/15 15:44:10 by kvan-don         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_puthex_pf(unsigned long num, size_t *count, char base)
{
	if (num >= 16)
	{
		ft_puthex_pf(num / 16, count, base);
		ft_puthex_pf(num % 16, count, base);
	}
	else
	{
		if (num <= 9)
			ft_putchar_pf(num + '0', count);
		else
		{
			if (base == 'x')
				ft_putchar_pf(num - 10 + 'a', count);
			else if (base == 'X')
				ft_putchar_pf(num - 10 + 'A', count);
		}
	}
}
