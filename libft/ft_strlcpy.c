/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvan-don <kvan-don@student.42luxembou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 15:18:51 by kvan-don          #+#    #+#             */
/*   Updated: 2024/03/03 13:35:39 by kvan-don         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* What this function does is pretty simple in that it's made to copy one string
to another but with a small catch, it always NUL-terminate the string.
If you give a dstsize long enough to NUL-terminate the string without truncating
it, strlcpy() will simply copy the string, as you'd do with strcpy(). If you
don't give a dstsize long enough, it will copy dstsize - 1 characters from the
source into the destination, adding the NUL-terminating character after that.
*/

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (*(src + i))
		i++;
	if (!size)
		return (i);
	while (--size && *src)
		*dst++ = *src++;
	*dst = '\0';
	return (i);
}
