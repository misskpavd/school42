/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvan-don <kvan-don@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 13:33:44 by kvan-don          #+#    #+#             */
/*   Updated: 2024/03/03 11:17:38 by kvan-don         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* calloc() works in the same way as malloc() does, but the difference is that
calloc() sets all the memory bytes are set to 0 instead of staying as the
gibberish that was there in memory before we allocated it.*/

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*tmp;
	size_t			i;

	i = 0;
	tmp = malloc(nmemb * size);
	if (!tmp)
		return (NULL);
	while (i < nmemb * size)
		tmp[i++] = 0;
	return (tmp);
}
