/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvan-don <kvan-don@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 12:15:36 by kvan-don          #+#    #+#             */
/*   Updated: 2024/03/15 16:56:13 by kvan-don         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_putptr_pf(void *ptr, size_t *count)
{
	unsigned long	ptr_address;

	ptr_address = (unsigned long)ptr;
	if (ptr_address == 0)
		ft_putstr_pf("(nil)", count);
	else
	{
		ft_putstr_pf("0x", count);
		ft_puthex_pf(ptr_address, count, 'x');
	}
}
