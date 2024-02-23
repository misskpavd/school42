/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvan-don <kvan-don@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 19:24:32 by kvan-don          #+#    #+#             */
/*   Updated: 2024/02/22 21:50:05 by kvan-don         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The memmove() function copies len bytes from string src to string dst.
   The two strings may overlap; the copy is always done in a non-destructive
   manner. 
   The memmove() function return the original value of dst.*/

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
/* declare 2 temporary pointer for src and dst */
/* declare a counter */
	char	*tmp_dst;
	char	*tmp_src;
	size_t	i;

/* check if both src and dst are NULL */
	if (!dst && !src)
		return (NULL);
    /* make dst tmp pointer equal to dst converted to char * */
	tmp_dst = (char *)dst;
    /* make src tmp pointer equal to src converted to char * */
	tmp_src = (char *)src;
	i = 0;
    /* if src and dst are overlapping */
        /* loop while len is greater than 0 and copy src into dst */
    /* if src and dst are not overlapping */
        /* loop while our counter is less than len and copy src into dst */
    /* return dst */
}
