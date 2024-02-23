/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvan-don <kvan-don@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 22:01:29 by kvan-don          #+#    #+#             */
/*   Updated: 2024/02/23 09:24:39 by kvan-don         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* checks for any printable character including space. (decimal 32 to 126) */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
