/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libtest.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvan-don <kvan-don@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 21:50:21 by kvan-don          #+#    #+#             */
/*   Updated: 2024/02/23 17:22:28 by kvan-don         ###   ########.fr       */
/*	                                                                          */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	printf("----------------\n");
	printf("\033[1mTest ft_isalpha\033[0m\n");
	printf("Is \'Q\' alpha? ");
	printf("%d\n", ft_isalpha('Q'));
	printf("Is \'2\' alpha? ");
	printf("%d\n", ft_isalpha('2'));
	printf("----------------\n\n");
     
    printf("----------------\n");
    printf("\033[1mTest ft_isdigit\033[0m\n");
	printf("Is \'Q\' digit? ");
	printf("%d\n", ft_isdigit('Q'));
	printf("Is \'2\' digit? ");
	printf("%d\n", ft_isdigit('2'));
	printf("----------------\n\n");

	printf("----------------\n");
	printf("\033[1mTest ft_isalpha\033[0m\n");
	printf("Is \'Q\' alnum? ");
	printf("%d\n", ft_isalnum('Q'));
	printf("Is \'2\' alnum? ");
	printf("%d\n", ft_isalnum('2'));
	printf("Is \'\\\' alnum? ");
	printf("%d\n", ft_isalnum('\\'));
	printf("----------------\n\n");

	printf("----------------\n");
	printf("\033[1mTest ft_isascii\033[0m\n");
	printf("Is \'Q\' ascii? ");
	printf("%d\n", ft_isascii('Q'));
	printf("Is \'2\' ascii? ");
	printf("%d\n", ft_isascii('2'));
	printf("Is \'\\\' ascii? ");
	printf("%d\n", ft_isascii('\\'));
	printf("Is 255 ascii? ");
	printf("%d\n", ft_isascii(255));
	printf("----------------\n\n");

	printf("----------------\n");
	printf("\033[1mTest ft_isprint\033[0m\n");
	printf("Is \'Q\' print? ");
	printf("%d\n", ft_isprint('Q'));
	printf("Is \'2\' print? ");
	printf("%d\n", ft_isprint('2'));
	printf("Is \'\\\' print? ");
	printf("%d\n", ft_isprint('\\'));
	printf("Is 255 print? ");
	printf("%d\n", ft_isprint(255));
	printf("----------------\n\n");
    
	printf("----------------\n");
	printf("\033[1mTest ft_strlen\033[0m\n");
	printf("length of string: 12345678: ");
	printf("%zu\n", ft_strlen("12345678"));
	printf("length of string: Hello, World!: ");
	printf("%zu\n", ft_strlen("Hello, World"));
	printf("----------------\n\n");
     
    printf("----------------\n");
    printf("\033[1mTest ft_memset\033[0m\n");
	char buffer[10];
	ft_memset(buffer, 'A', sizeof(buffer) - 1);
	buffer[sizeof(buffer) -1] = '\0';
	printf("buffer after memset: %s\n", buffer);
	ft_memset(buffer, 'B', 5);
	printf("buffer after changing first 5 characters: %s\n", buffer);
	printf("----------------\n\n");

	printf("----------------\n");
	printf("\033[1mTest ft_bzero\033[0m\n");
	for (size_t i = 0; i < sizeof(buffer) - 1; i++)
		buffer[i] = 'A' + i;
	buffer[sizeof(buffer) - 1] = '\0';
	printf("Buffer before ft_bzero: %s\n", buffer);
	ft_bzero(buffer, 5);
	printf("Buffer after ft_bzero: ");
	for (size_t i = 0; i < sizeof(buffer) - 1; i++) 
	{
		if (buffer[i] == 0)
			printf("'\\0' ");
		else
			printf("%c", buffer[i]);
 	}
	printf("\n----------------\n\n");

	printf("----------------\n");
	printf("\033[1mTest ft_memcpy\033[0m\n");
	char src[] = "Test string";
	char dst[20];
	ft_memcpy(dst, src, sizeof(src));
 	printf("Source: %s\n", src);
	printf("Destination after memcpy: %s\n", dst);
	printf("----------------\n\n");

	printf("----------------\n");
	printf("\033[1mTest ft_memmove\033[0m\n");
	char str[] = "Example string";
	printf("Original: %s\n", str);
	ft_memmove(str, str + 8, 6);
	printf("After ft_memmove: %s\n", str);
	printf("----------------\n\n");

	printf("----------------\n");
	printf("\033[1mTest ft_strlcpy\033[0m\n");
	char *src2 = "Hello, World!";
	char dest2[5];
	unsigned int result = ft_strlcpy(dest2, src2, sizeof(dest2));
	printf("Original string: Hello, World!, Destination size: 5\n");
	printf("Copied string: %s\n", dest2);
	printf("----------------\n\n");

	printf("----------------\n");
	printf("\033[1mTest ft_strlcat\033[0m\n");


}
