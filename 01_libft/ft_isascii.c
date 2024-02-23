/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvan-don <kvan-don@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 21:44:48 by kvan-don          #+#    #+#             */
/*   Updated: 2024/02/23 09:23:51 by kvan-don         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/* The isascii() function is used to check whether a given character, passed to
the function as an integer argument, fits into the ASCII character set.
The isascii() function is useful when you need to ensure that a character falls
within the standard 7-bit ASCII character set, which includes control characters
(0-31), printable characters (32-126), and the delete character (127). */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
