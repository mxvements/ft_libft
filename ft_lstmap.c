/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 21:20:24 by luciama2          #+#    #+#             */
/*   Updated: 2023/10/15 21:20:28 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_lstmap.c		bonus
 * LIB				-
 * PROTOTYPE		t_list *ft_lstmap(t_list *lst, 
 * 									  void *(*f)(void *), void (*del)(void *))
 * PARAMETERS		lst: address of a ptr to a node
 * 					f: address of a funct to iterate on the list
 * 					del: address of a funct to delete the content of a node, 
 * 					if needed		
 * RETURN VALUE		t_list, the new list
 * 					NULL if the allocation fails
 * EXTERNAL FUNCTS	malloc, free
 * DESCRIPTION		iterates the list 'lst' and applies the funcion 'f' on the
 * 					content of each node.
 * 					creates a new list resulting of the successive applications
 * 					of the function 'f'
 * 					the 'del' function is used to delete the content of a node
 * 					if needed
*/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*node;
	t_list	*cpy;

	if (!lst || !f || !del)
		return (NULL);
	cpy = lst;
	newlst = NULL;
	while (cpy)
	{
		node = ft_lstnew(f(cpy->content));
		if (!node)
			ft_lstclear(&newlst, del);
		ft_lstadd_back(&newlst, node);
		cpy = cpy->next;
	}
	return (newlst);
}
