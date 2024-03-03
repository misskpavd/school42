/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvan-don <kvan-don@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 18:06:02 by kvan-don          #+#    #+#             */
/*   Updated: 2024/03/02 21:35:49 by kvan-don         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* the memchr() function locates the first occurence of c (convered to an
unsigned char) in string s.
The memchr() function returns a pointer to the byte located, or NULL if no such
byte exists within n bytes. */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *) &str[i]);
		i++;
	}
	return (NULL);
}
