/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvan-don <kvan-don@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 18:04:09 by kvan-don          #+#    #+#             */
/*   Updated: 2024/03/03 18:27:22 by kvan-don         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The memcpy() function copies n bytes from memory area src to memory area dst.
If dstt and src overlap, behavior is undefined. Applications in which dst and src
might overlap should use memove(3) instead.
The memcpy() function returns the original value of dst */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}
