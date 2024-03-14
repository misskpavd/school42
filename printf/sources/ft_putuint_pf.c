/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint_pf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvan-don <kvan-don@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:29:38 by kvan-don          #+#    #+#             */
/*   Updated: 2024/03/14 14:37:04 by kvan-don         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putuint_pf(unsigned int num, size_t *count)
{
	if (num >= 10)
		ft_putuint_pf(num / 10, count);
	ft_putchar_pf(num % 10 + '0', count);
}
