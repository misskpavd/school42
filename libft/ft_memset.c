/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvan-don <kvan-don@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 11:37:09 by kvan-don          #+#    #+#             */
/*   Updated: 2024/03/03 11:08:03 by kvan-don         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The memset() function writes len bytes of value c (converted to an unsigned
char) to the string b.
The value of c will be converted to an unsigned char, so to set this value in
the b string, we'll have to convert the b string to a pointer to unsigned char.
But remember the return value, we have to return the first parameter of the
function, the void *b string. */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*tmp;

	tmp = (unsigned char *)s;
	while (n > 0)
	{
		tmp[n - 1] = (unsigned char)c;
		n--;
	}
	return (s);
}
