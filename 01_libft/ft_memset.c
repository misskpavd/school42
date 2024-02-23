/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvan-don <kvan-don@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 11:37:09 by kvan-don          #+#    #+#             */
/*   Updated: 2024/02/21 16:17:50 by kvan-don         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The memset() function writes len bytes of value c (converted to an unsigned
char) to the string b.
The value of c will be converted to an unsigned char, so to set this value in
the b string, we'll have to convert the b string to a pointer to unsigned char.
But remember the return value, we have to return the first parameter of the
function, the void *b string. */

#include "libft.h"
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*tmp;

	tmp = (unsigned char *)b;
	while (len > 0)
	{
		tmp[len - 1] = (unsigned char)c;
		len--;
	}
	return (b);
}

int main() {
    char buffer[10];

    // Initialize buffer with 'A's
    ft_memset(buffer, 'A', sizeof(buffer) - 1);  // Leave space for null terminator
    buffer[sizeof(buffer) - 1] = '\0';  // Null-terminate the string

    printf("Buffer after memset: %s\n", buffer);

    // Change buffer contents using ft_memset
    ft_memset(buffer, 'B', 5);  // Change first 5 characters to 'B's
    printf("Buffer after changing first 5 characters: %s\n", buffer);

    return 0;
}
