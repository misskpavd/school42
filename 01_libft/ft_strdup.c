/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvan-don <kvan-don@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 13:59:21 by kvan-don          #+#    #+#             */
/*   Updated: 2024/02/28 14:06:17 by kvan-don         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The strdup() function returns a pointer to a new string which is
       a duplicate of the string s.  Memory for the new string is
       obtained with malloc(3), and can be freed with free(3). */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
{
	int		i;
	char	*dst;

	i = 0;
	while (s1[i] != '\0')
		i++;
	dst = malloc((i + 1) * sizeof(char));
	i = 0;
	while (s1[i] != '\0')
	{
		dst[i] = s1[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
}
