/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvan-don <kvan-don@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:19:29 by kvan-don          #+#    #+#             */
/*   Updated: 2024/02/21 16:35:31 by kvan-don         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The bzero() function erases the data in the n bytes of the memory
       starting at the location pointed to by s, by writing zeros (bytes
       containing '\0') to that area. */

#include "libft.h"
#include <stdio.h>

void ft_bzero(void *s, size_t n)
{
	char	*tmp;

	tmp = (char *)s;
	while (n > 0)
	{
		*tmp++ = 0;
		n--;
	}
}

int main() {
    char buffer[10];

    // Initialize buffer with arbitrary values
    for (size_t i = 0; i < sizeof(buffer) - 1; i++) {  // Change 'int' to 'size_t'
        buffer[i] = 'A' + i;  // Fill with 'A', 'B', 'C', etc.
    }
    buffer[sizeof(buffer) - 1] = '\0'; // Null-terminate the string

    // Print buffer's content before applying ft_bzero
    printf("Buffer before ft_bzero: %s\n", buffer);

    // Apply ft_bzero to the buffer
    ft_bzero(buffer, 5);  // Zero out the first 5 bytes

    // Print buffer's content after applying ft_bzero
    printf("Buffer after ft_bzero: ");
    for (size_t i = 0; i < sizeof(buffer) - 1; i++) {  // Change 'int' to 'size_t'
        if (buffer[i] == 0) {
            printf("'\\0' ");  // Represent zeroed bytes as '\0'
        } else {
            printf("%c ", buffer[i]);
        }
    }
    printf("\n");

    return 0;
}
