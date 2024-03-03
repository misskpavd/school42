/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvan-don <kvan-don@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 16:50:45 by kvan-don          #+#    #+#             */
/*   Updated: 2024/02/26 16:54:03 by kvan-don         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The tolower() function converts an upper-case letter to the corresponding
lower-case letter. The argument must be representable as an unsigned char or
the value of EOF. */

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}
