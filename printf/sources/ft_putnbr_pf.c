/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvan-don <kvan-don@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:21:05 by kvan-don          #+#    #+#             */
/*   Updated: 2024/03/14 14:28:54 by kvan-don         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_pf(int num, size_t *count)
{
	if (num == -2147483648)
	{
		write(1, "-2147483648", 11);
		(*count) += 11;
	}
	else if (num < 0)
	{
		ft_putchar_pf('-', count);
		ft_putnbr_pf(-num, count);
	}
	else
	{
		if (num >= 10)
			ft_putnbr((num/10), count);
		ft_putchar_pf((num % 10 + '0'), count);
	}
}
