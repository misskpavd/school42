/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvan-don <kvan-don@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 17:46:28 by kvan-don          #+#    #+#             */
/*   Updated: 2024/02/26 18:03:37 by kvan-don         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* strncmp() compares string in a lexicographic order, this means that it
compares each characters by their corresponding ASCII values.
strncmp() compares maximum n characters in both strings.
The returned value depends on what difference is found.
If the two strings are the same, the returned result will be 0.
If there is a difference, and the first different character in s2 is greater
than the character at the same place in s1, the returned result will be negative.
If there is a difference, and the first different character in s2 is less than
the character at the same place in s1, the returned result will be positive. */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	return (0);
}
