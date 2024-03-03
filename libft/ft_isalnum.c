/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvan-don <kvan-don@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 21:36:36 by kvan-don          #+#    #+#             */
/*   Updated: 2024/02/23 09:23:20 by kvan-don         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* checks for an alphanumeric character; it is equivalent to
              (isalpha(c) || isdigit(c)). */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90)
		|| (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
