/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvan-don <kvan-don@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:30:17 by kvan-don          #+#    #+#             */
/*   Updated: 2024/03/03 11:13:52 by kvan-don         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The strnstr() function works in the same way as strchr() but searches for a
complete substring in max n characters instead of a single character. 
If needle is an empty string, haystack is returned; if needle occurs nowhere in
haystack, NULL is returned; otherwise a pointer to the first character of the
first occurence of needle is returned.*/

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (i < len && big[i] != '\0')
	{
		j = 0;
		while (big[i + j] == little[j] && (i + j) < len)
		{
			if (little[j + 1] == '\0')
				return ((char *)big + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
