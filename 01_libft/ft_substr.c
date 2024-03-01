/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvan-don <kvan-don@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:07:25 by kvan-don          #+#    #+#             */
/*   Updated: 2024/02/29 16:28:41 by kvan-don         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Allocates (with malloc(3)) and returns a substring from the string ’s’.
The substring begins at index ’start’ and is of maximum size ’len’. 
example:
ft_substr("Bonjour comment ca va?", 5, 8);
=> "ur comme" */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	char *str;

	s_len = 0;
	i = 0;
	while (s[s_len] != '\0')
		s_len++;
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str || !s )
		return (NULL);
	if (start >= s_len)
	{
		str[0] = '\0';
		return (str);
	}
	while (s[start + i] != '\0' && i < len)
		{
		str[i] = s[start + i];
		i++;
		}
	str[i] = '\0';
	return (str);
}
