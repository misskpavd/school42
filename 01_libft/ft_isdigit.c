/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvan-don <kvan-don@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 21:10:17 by kvan-don          #+#    #+#             */
/*   Updated: 2024/02/20 21:29:51 by kvan-don         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* checks for a digit (0 through 9). */

#include "libft.h"
#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

int main() {
    char testChars[] = "A60@9z";
    int result;

    for (int i = 0; testChars[i] != '\0'; i++) {
        result = ft_isdigit(testChars[i]);
        if (result) {
            printf("'%c' is a digit.\n", testChars[i]);
        } else {
            printf("'%c' is NOT a digit.\n", testChars[i]);
        }
    }

    return 0;
}

