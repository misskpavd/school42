/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvan-don <kvan-don@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 12:15:36 by kvan-don          #+#    #+#             */
/*   Updated: 2024/03/14 12:35:09 by kvan-don         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_putptr_pf(void *ptr, size_t *count)
{
	char		*str;
	unsigned long	ptr_address;

	ptr_address = (unsigned long)ptr;
	ft_putstr_pf("0x", count);
	if (ptr_address == 0)
		ft_putchar_pf('0', count);
	else
		ft_puthex_pf(addr, count, LOW_CASE_HEX)
}
