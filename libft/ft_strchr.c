/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvan-don <kvan-don@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 16:56:33 by kvan-don          #+#    #+#             */
/*   Updated: 2024/03/03 11:22:23 by kvan-don         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The strchr() function returns a pointer to the first occurrence
       of the character c in the string s.
The strchr() and strrchr() functions return a pointer to the
       matched character or NULL if the character is not found.  The
       terminating null byte is considered part of the string, so that
       if c is specified as '\0', these functions return a pointer to
       the terminator.  */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while ((s[i] != (char)c) && (s[i] != '\0'))
		i++;
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (NULL);
}
