/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvan-don <kvan-don@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:30:17 by kvan-don          #+#    #+#             */
/*   Updated: 2024/02/28 12:58:31 by kvan-don         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The strnstr() function works in the same way as strchr() but searches for a
complete substring in max n characters instead of a single character. 
If needle is an empty string, haystack is returned; if needle occurs nowhere in
haystack, NULL is returned; otherwise a pointer to the first character of the
first occurence of needle is returned.*/

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (i < len && haystack[i] != '\0')
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j) < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *)haystack + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
