/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvan-don <kvan-don@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 16:32:00 by kvan-don          #+#    #+#             */
/*   Updated: 2024/03/01 11:09:32 by kvan-don         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Allocates (with malloc(3)) and returns a new string, which is the result of
the concatenation of ’s1’ and ’s2’. */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *res;
	int i;
	int j;
    
	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	res = (char *) malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!res)
		return (NULL);
	while (s1[i] != '\0')
		res[j++] = s1[i++];
	i = 0;
	while (s2[i] != '\0')
		res[j++] = s2[i++];
	res[j] = '\0';
	return (res);
}
