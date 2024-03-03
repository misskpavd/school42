/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvan-don <kvan-don@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 13:05:41 by kvan-don          #+#    #+#             */
/*   Updated: 2024/03/03 11:16:22 by kvan-don         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The atoi() function converts a string to its int representation.
The string passed as parameter may begin with an arbitrary number of whitespaces
as determined by isspace(3)
After the arbitrary number of whitespaces, there can be one single optional
'+' or '-' sign
The remainder of the string will be converted to an int, stopping at the first
character which is not a valid digit in the given base.*/

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] != '\0' && nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + nptr[i] - '0';
		i++;
	}
	return ((int)(result * sign));
}
