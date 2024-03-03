/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvan-don <kvan-don@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 19:37:32 by kvan-don          #+#    #+#             */
/*   Updated: 2024/03/02 19:51:04 by kvan-don         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Applies the function ’f’ on each character of the string passed as argument,
passing its index as first argument. Each character is passed by address to
’f’ to be modified if necessary. No return value */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		(*f)(i, &s[i]);
		i++;
	}
}
