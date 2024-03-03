/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvan-don <kvan-don@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 19:24:32 by kvan-don          #+#    #+#             */
/*   Updated: 2024/03/03 18:38:48 by kvan-don         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The memmove() function copies len bytes from string src to string dst.
   The two strings may overlap; the copy is always done in a non-destructive
   manner. 
   The memmove() function return the original value of dst.*/

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (dest);
	if (dest == src)
		return (dest);
	if (dest < src)
		ft_memcpy(dest, src, n);
	else
	{
		i = n;
		while (i > 0)
		{
			((char *)dest)[i - 1] = ((char *)src)[i - 1];
			i--;
		}
	}
	return (dest);
}
