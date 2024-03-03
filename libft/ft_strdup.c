/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvan-don <kvan-don@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 13:59:21 by kvan-don          #+#    #+#             */
/*   Updated: 2024/03/03 12:40:01 by kvan-don         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The strdup() function returns a pointer to a new string which is
       a duplicate of the string s.  Memory for the new string is
       obtained with malloc(3), and can be freed with free(3). */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*dst;

	dst = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!dst)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		dst[i] = s[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
