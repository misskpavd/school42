/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvan-don <kvan-don@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 21:10:17 by kvan-don          #+#    #+#             */
/*   Updated: 2024/02/23 09:22:39 by kvan-don         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* checks for a digit (0 through 9). */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
