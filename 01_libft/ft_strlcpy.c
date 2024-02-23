/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvan-don <kvan-don@student.42luxembou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 15:18:51 by kvan-don          #+#    #+#             */
/*   Updated: 2024/02/23 16:39:26 by kvan-don         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* What this function does is pretty simple in that it's made to copy one string
to another but with a small catch, it always NUL-terminate the string.
If you give a dstsize long enough to NUL-terminate the string without truncating
it, strlcpy() will simply copy the string, as you'd do with strcpy(). If you
don't give a dstsize long enough, it will copy dstsize - 1 characters from the
source into the destination, adding the NUL-terminating character after that. */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	if (!dst || !src)
		return (0);
	src_len = ft_strlen(src);
	if (!size)
		return (src_len);
	while (src[i] != '\0' && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	if (size != 0)
		dst[i] = '\0';
	return (src_len);
}
