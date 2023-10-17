/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
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
/*
void	ft_nodefree(void *content)
{
	free(content);
	return ;
}

int	main(void)
{
	char	*newnode1 = "hola";
	char	*newnode2 = "adios";
	char	*newnode3 = "42";
	t_list	*node2 = ft_lstnew(ft_strdup(newnode2));
	t_list	*node3 = ft_lstnew(ft_strdup(newnode3));
	t_list	*testlist = ft_lstnew(ft_strdup(newnode1));

	ft_lstadd_back(&testlist, node2);
	ft_lstadd_back(&testlist, node3);

	ft_lstclear(&node2, &ft_nodefree);

	while (testlist->next != NULL)
	{
		printf("node content: %s\n", (char *)testlist->content);
		testlist = testlist->next;
	}
	if (testlist->next == NULL)
		printf("node content: %s\n", (char *)testlist->content);

	return (0);
}*/