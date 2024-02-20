/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvan-don <kvan-don@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 19:57:56 by kvan-don          #+#    #+#             */
/*   Updated: 2024/02/20 21:13:07 by kvan-don         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The isalpha() function tests for any character for which isupper(3) or
islower(3) is true. The value of the argument must be resprensentable as an
unsigned char or the value of EOF. 
The isalpha() function return zero if the character tests false and returns
non-zero if the character tests true.*/

#include "libft.h"
#include <stdio.h>

int		ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

int main() {
    // Array of characters to test
    char testChars[] = "Aa0@Zz";
    int result;

    // Iterate through each character in the testChars string
    for (int i = 0; testChars[i] != '\0'; i++) {
        result = ft_isalpha(testChars[i]);
        if (result) {
            printf("'%c' is an alphabetic character.\n", testChars[i]);
        } else {
            printf("'%c' is NOT an alphabetic character.\n", testChars[i]);
        }
    }

    return 0;
}
