/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvan-don <kvan-don@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 21:44:48 by kvan-don          #+#    #+#             */
/*   Updated: 2024/02/20 22:00:25 by kvan-don         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/* The isascii() function is used to check whether a given character, passed to
the function as an integer argument, fits into the ASCII character set.
The isascii() function is useful when you need to ensure that a character falls
within the standard 7-bit ASCII character set, which includes control characters
(0-31), printable characters (32-126), and the delete character (127). */

#include "libft.h"
#include <stdio.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

int main() {
    // Array of test values including ASCII and non-ASCII values
    int testValues[] = {65, 'A', 'z', 127, 128, -1};
    int numTests = sizeof(testValues) / sizeof(testValues[0]);

    for (int i = 0; i < numTests; i++) {
        int result = ft_isascii(testValues[i]);
        if (result) {
            printf("Value %d ('%c') is an ASCII character.\n", testValues[i], testValues[i]);
        } else {
            printf("Value %d is NOT an ASCII character.\n", testValues[i]);
        }
    }

    return 0;
}
