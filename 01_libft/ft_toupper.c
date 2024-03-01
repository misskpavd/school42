/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvan-don <kvan-don@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 16:40:07 by kvan-don          #+#    #+#             */
/*   Updated: 2024/02/26 16:45:10 by kvan-don         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The toupper() function converts a lower-case letter to the corresponding
upper-case letter. The argument must be representable as an unsigned char or the
value of EOF.*/

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}
