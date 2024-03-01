/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvan-don <kvan-don@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 15:29:45 by kvan-don          #+#    #+#             */
/*   Updated: 2024/02/26 16:33:14 by kvan-don         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Appends src to the string dst up to dstsize - strlen(dst) - 1 characters,
ensuring the result is null-terminated.
The function takes the full size of the buffer (not just the length) and
guarantees to null-terminate the result (as long as dstsize is larger than 0).
If dstsize is less than or equal to the length of dst, no characters from src
are appended, but dst will still be null-terminated. 
Returns the total length of the string it tried to create, which means the
initial length of dst plus the length of src. If the return value is greater
than or equal to dstsize, truncation occurred.*/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	i;

	src_len = 0;
	dst_len = 0;
	while (dst[dst_len] != '\0' && dst_len < dstsize)
		dst_len++;
	while (src[src_len] != '\0')
		src_len++;
	if (dstsize <= dst_len)
		return (dst_len + src_len);
	i = 0;
	while (i < dstsize - dst_len - 1 && src[i] != '\0')
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
