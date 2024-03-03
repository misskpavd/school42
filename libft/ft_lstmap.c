/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvan-don <kvan-don@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 19:10:46 by kvan-don          #+#    #+#             */
/*   Updated: 2024/03/03 19:26:21 by kvan-don         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Iterates the list ’lst’ and applies the function ’f’ on the content of each
node. Creates a new list resulting of the successive applications of the
function ’f’. The ’del’ function is used to delete the content of a node if
needed. */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_obj;
	t_list	*new_lst;
	void	*fnode;

	if (!lst || !f || !del)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		fnode = f(lst->content);
		new_obj = ft_lstnew(fnode);
		if (!new_obj)
		{
			ft_lstclear(&new_lst, del);
			del(fnode);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_obj);
		lst = lst->next;
	}
	return (new_lst);
}
