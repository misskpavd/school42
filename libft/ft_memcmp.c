/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvan-don <kvan-don@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 18:47:16 by kvan-don          #+#    #+#             */
/*   Updated: 2024/03/02 21:34:11 by kvan-don         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The memcmp() function compares the first n bytes (each
       interpreted as unsigned char) of the memory areas s1 and s2.
The memcmp() function returns zero if the two strings are identical, otherwise
returns the difference between the first two differing bytes */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
