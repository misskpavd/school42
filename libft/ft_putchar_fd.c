/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvan-don <kvan-don@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 19:54:09 by kvan-don          #+#    #+#             */
/*   Updated: 2024/03/02 20:21:34 by kvan-don         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Outputs the character ’c’ to the given file
descriptor. */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
