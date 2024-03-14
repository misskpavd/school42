/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvan-don <kvan-don@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 12:12:31 by kvan-don          #+#    #+#             */
/*   Updated: 2024/03/14 12:14:30 by kvan-don         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr_pf(char *str, size_t *count)
{
	if (!str)
		str = "(null)";
	while (*str)
	{
		ft_putchar_pf(*str, count);
		str++;
	}
}
