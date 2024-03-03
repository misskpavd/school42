/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvan-don <kvan-don@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 22:24:06 by kvan-don          #+#    #+#             */
/*   Updated: 2024/02/23 14:09:29 by kvan-don         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The strlen() function calculates the length of the string pointed
       to by s, excluding the terminating null byte ('\0'). */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
