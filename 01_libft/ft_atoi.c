/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvan-don <kvan-don@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 13:05:41 by kvan-don          #+#    #+#             */
/*   Updated: 2024/02/28 13:31:08 by kvan-don         ###   ########.fr       */
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

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return ((int)(result * sign));
}
