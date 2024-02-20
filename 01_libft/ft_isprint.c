/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvan-don <kvan-don@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 22:01:29 by kvan-don          #+#    #+#             */
/*   Updated: 2024/02/20 22:06:34 by kvan-don         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* checks for any printable character including space. (decimal 32 to 126) */

#include "libft.h"
#include <stdio.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

int main() {
    int testValues[] = {65, 'A', 'z', 127, 128, -1, 22};
    int numTests = sizeof(testValues) / sizeof(testValues[0]);

    for (int i = 0; i < numTests; i++) {
        int result = ft_isprint(testValues[i]);
        if (result) {
            printf("Value %d ('%c') is a printable character.\n", testValues[i], testValues[i]);
        } else {
            printf("Value %d is NOT a printable character.\n", testValues[i]);
        }
    }

    return 0;
}
