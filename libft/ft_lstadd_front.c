/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvan-don <kvan-don@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 15:41:13 by kvan-don          #+#    #+#             */
/*   Updated: 2024/03/03 15:49:27 by kvan-don         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Adds the node ’new’ at the beginning of the list. */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst)
	{
		new->next = *lst;
		*lst = new;
	}
}
