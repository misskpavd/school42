/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvan-don <kvan-don@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 22:24:06 by kvan-don          #+#    #+#             */
/*   Updated: 2024/02/20 22:42:00 by kvan-don         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The strlen() function calculates the length of the string pointed
       to by s, excluding the terminating null byte ('\0'). */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int main() {
    const char *strings[] = {"Hello, world!", "", "12345", "A single character"};
    int numStrings = sizeof(strings) / sizeof(strings[0]);

    for (int i = 0; i < numStrings; i++) {
        size_t length = ft_strlen(strings[i]);
        printf("The length of \"%s\" is %zu.\n", strings[i], length);
    }

    return 0;
}
