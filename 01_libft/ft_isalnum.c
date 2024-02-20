/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvan-don <kvan-don@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 21:36:36 by kvan-don          #+#    #+#             */
/*   Updated: 2024/02/20 21:44:02 by kvan-don         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* checks for an alphanumeric character; it is equivalent to
              (isalpha(c) || isdigit(c)). */

#include "libft.h"
#include <stdio.h>

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90)
		|| (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

int main() {
    char testChars[] = "A60@9z%";
    int result;

    for (int i = 0; testChars[i] != '\0'; i++) {
        result = ft_isalnum(testChars[i]);
        if (result) {
            printf("'%c' is a digit or alpabetic character.\n", testChars[i]);
        } else {
            printf("'%c' is NOT a digit or alphabetic character.\n", testChars[i]);
        }
    }

    return 0;
}
