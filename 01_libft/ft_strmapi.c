/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvan-don <kvan-don@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 17:14:22 by kvan-don          #+#    #+#             */
/*   Updated: 2024/03/02 19:31:57 by kvan-don         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Applies the function ’f’ to each character of the string ’s’, and passing
its index as first argument to create a new string (with malloc(3)) resulting
from successive applications of ’f’.
s: The string on which to iterate.
f: The function to apply to each character.
The string created from the successive applications of ’f’.
Returns NULL if the allocation fails. */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char	*str;

	str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s))
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
