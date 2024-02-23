/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvan-don <kvan-don@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 19:57:56 by kvan-don          #+#    #+#             */
/*   Updated: 2024/02/23 09:22:04 by kvan-don         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The isalpha() function tests for any character for which isupper(3) or
islower(3) is true. The value of the argument must be resprensentable as an
unsigned char or the value of EOF. 
The isalpha() function return zero if the character tests false and returns
non-zero if the character tests true.*/

#include "libft.h"

int		ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
