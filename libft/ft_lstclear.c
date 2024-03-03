/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvan-don <kvan-don@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 18:44:33 by kvan-don          #+#    #+#             */
/*   Updated: 2024/03/03 19:01:24 by kvan-don         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Deletes and frees the given node and every successor of that node, using
the function ’del’and free(3).
Finally, the pointer to the list must be set to NULL. */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (*lst)
	{
		while (*lst)
		{
			tmp = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = tmp;
		}
	}
	free(*lst);
	*lst = NULL;
}
