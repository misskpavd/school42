/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libtest.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvan-don <kvan-don@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 21:50:21 by kvan-don          #+#    #+#             */
/*   Updated: 2024/02/23 09:21:11 by kvan-don         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	write(1, "Test ft_isalpha\n", 17);
	printf("Is \'Q\' alpha? ");
	printf("%d\n", ft_isalpha('Q'));
	printf("Is \'2\' alpha? ");
	printf("%d\n", ft_isalpha('2'));
	printf("----------------\n\n");

	write(1, "Test ft_isdigit\n", 17);
	printf("Is \'Q\' digit? ");
	printf("%d\n", ft_isdigit('Q'));
	printf("Is \'2\' digit? ");
	printf("%d\n", ft_isdigit('2'));
	printf("----------------\n\n");

	write(1, "Test ft_isalnum\n", 17);
	printf("Is \'Q\' alnum? ");
	printf("%d\n", ft_isalnum('Q'));
	printf("Is \'2\' alnum? ");
	printf("%d\n", ft_isalnum('2'));
	printf("Is \'\\\' alnum? ");
	printf("%d\n", ft_isalnum('\\'));
	printf("----------------\n\n");

	write(1, "Test ft_isascii\n", 17);
	printf("Is \'Q\' ascii? ");
	printf("%d\n", ft_isascii('Q'));
	printf("Is \'2\' ascii? ");
	printf("%d\n", ft_isascii('2'));
	printf("Is \'\\\' ascii? ");
	printf("%d\n", ft_isascii('\\'));
	printf("Is 255 ascii? ");
	printf("%d\n", ft_isascii(255));
	printf("----------------\n\n");

	write(1, "Test ft_isprint\n", 17);
	printf("Is \'Q\' print? ");
        printf("%d\n", ft_isprint('Q'));
        printf("Is \'2\' print? ");
        printf("%d\n", ft_isprint('2'));
        printf("Is \'\\\' print? ");
        printf("%d\n", ft_isprint('\\'));
        printf("Is 255 print? ");
        printf("%d\n", ft_isprint(255));
        printf("----------------\n\n");

}
