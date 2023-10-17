/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 16:30:23 by luciama2          #+#    #+#             */
/*   Updated: 2023/10/15 16:34:48 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_lstdelone			bonus
 * LIB
 * PROTOTYPE			void ft_lstdelone(t_list *lst, void (*del)(void*))
 * PARAMETERS			lst: the node to free
 * 						del: address of the function used to delete the node
 * RETURN VALUE			none
 * EXTERNAL FUNCTS		free
 * DESCRIPTION			takes as parameter the node and frees the memory
 * 						of the node's content using the function 'del' given
 * 						as a param and free the node
 * 						the memory 'next' must not be freed.
 */

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
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
	t_list	*testlist = ft_lstnew(ft_strdup(newnode1));

	ft_lstadd_back(&testlist, ft_lstnew(ft_strdup(newnode2)));
	ft_lstadd_back(&testlist, ft_lstnew(ft_strdup(newnode3)));

	ft_lstdelone(testlist, &ft_nodefree);

	while (testlist->next != NULL)
	{
		printf("node content: %s\n", (char *)testlist->content);
		testlist = testlist->next;
	}
	if (testlist->next == NULL)
		printf("node content: %s\n", (char *)testlist->content);

	return (0);
}*/