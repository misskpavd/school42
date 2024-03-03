/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvan-don <kvan-don@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 18:09:43 by kvan-don          #+#    #+#             */
/*   Updated: 2024/03/03 18:20:35 by kvan-don         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Adds the node ’new’ at the end of the list.*/

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (lst && new)
	{
		tmp = ft_lstlast(*lst);
		if (!tmp)
			*lst = new;
		else
			tmp->next = new;
	}
}
