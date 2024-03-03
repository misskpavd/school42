/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvan-don <kvan-don@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 14:18:38 by kvan-don          #+#    #+#             */
/*   Updated: 2024/03/02 17:13:45 by kvan-don         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Allocates (with malloc(3)) and returns a string representing the integer
received as an argument. Negative numbers must be handled. 
The ft_itoa function does the opposite work of ft_atoi,
converting a number to a string.*/

#include "libft.h"

static int	int_len(int n)
{
	int	len;

	if (n <= 0)
		len = 1;
	else
		len = 0;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void	fill_str(char *str, int n, int sign, int len)
{
	int	i;

	i = sign + len - 1;
	if (n == 0)
		str[0] = '0';
	else
	{
		while (n != 0)
		{
			str[i--] = n % 10 + '0';
			n /= 10;
		}
	}
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	int		sign;

	len = int_len(n);
	sign = 0;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n == -2147483648)
	{
		ft_strlcpy(str, "-2147483648", 12);
		return (str);
	}
	if (n <= 0)
	{
		str[0] = '-';
		n = -n;
		sign = 1;
	}
	fill_str(str, n, sign, len - sign);
	return (str);
}
