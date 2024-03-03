/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvan-don <kvan-don@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 17:26:10 by kvan-don          #+#    #+#             */
/*   Updated: 2024/03/03 12:21:01 by kvan-don         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The strrchr() function returns a pointer to the last occurrence
       of the character c in the string s.
       The strchr() and strrchr() functions return a pointer to the
       matched character or NULL if the character is not found.  The
       terminating null byte is considered part of the string, so that
       if c is specified as '\0', these functions return a pointer to
       the terminator. */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while (s[i] != (unsigned char)c)
	{
		if (i == 0)
			return (NULL);
		i--;
	}
	if (i <= ft_strlen(s))
		return ((char *)&s[i]);
	return (NULL);
}
