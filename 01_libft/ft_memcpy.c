/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvan-don <kvan-don@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 18:04:09 by kvan-don          #+#    #+#             */
/*   Updated: 2024/02/21 18:16:21 by kvan-don         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The memcpy() function copies n bytes from memory area src to memory area dst.
If dstt and src overlap, behavior is undefined. Applications in which dst and src
might overlap should use memove(3) instead.
The memcpy() function returns the original value of dst */

#include "libft.h"
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	unsigned char	*tmp_dst;
	unsigned char	*tmp_src;

	i = 0;    
	tmp_dst = (unsigned char *)dst;
	tmp_src = (unsigned char *)src;
	while (i < n)
	{
		tmp_dst[i] = tmp_src[i];
		i++;
	}
	return (dst);
	
}

int main() {
    char src[] = "Test string";
    char dst[20];  // Ensure dst is large enough

    // Use ft_memcpy to copy the entire src string to dst, including the null terminator
    ft_memcpy(dst, src, sizeof(src));

    // Print the source and destination to verify the result
    printf("Source: %s\n", src);
    printf("Destination after memcpy: %s\n", dst);

    return 0;
}
