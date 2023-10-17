/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 16:43:43 by luciama2          #+#    #+#             */
/*   Updated: 2023/10/15 16:47:11 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_lstclear		bonus
 * LIB				-
 * PROTOTYPE		void ft_lstclear(t_list **lst, void (*del)(void *))
 * PARAMETERS		lst: address of a ptr to a node
 * 					del: address of a funct to delete the content of the node
 * RETURN VALUE		void
 * EXTERNAL FUNCTS	free
 * DESCRIPTION		deletes and frees the given node and every successor of 
 * 					that node, using the function 'del' and free(3)
 * 					Finally, the ptr to the list must set to NULL
 */

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*cpy;
	t_list	*temp;

	if (!lst || *lst == NULL)
		return ;
	cpy = *lst;
	while (cpy->next != NULL)
	{
		temp = cpy;
		cpy = temp->next;
		del(temp->content);
		free(temp);
	}
	if (cpy->next == NULL)
	{
		del(cpy->content);
		free(cpy);
	}
	*lst = NULL;
	return ;
}
