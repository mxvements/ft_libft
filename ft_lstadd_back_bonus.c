/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmmielgo <lmmielgo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 16:05:32 by luciama2          #+#    #+#             */
/*   Updated: 2023/12/07 23:44:39 by lmmielgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_lstadd_back		bonus
 * LIB					-
 * PROTOTYPE			void ft-lstadd_back(t_list **lst, t_list *new)
 * PARAMETERS			lst: address to a ptr to the 1st link of a list
 * 						new: address to a ptr to the node to be added
 * RETURN VALUE			void
 * EXTERNAL FUNCTS		-
 * DESCRIPTION			adds the node 'new' at the end of the list
 */

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*cpy;

	if (!lst)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		cpy = ft_lstlast(*lst);
		cpy->next = new;
	}
	return ;
}
/*
int	main(void)
{
	char	*newnode1 = "hola";
	char	*newnode2 = "adios";
	char	*newnode3 = "42";
	t_list	*testlist;

	testlist = ft_lstnew(newnode1);
	ft_lstadd_back(&testlist, ft_lstnew(newnode2));
	ft_lstadd_back(&testlist, ft_lstnew(newnode3));
	while (testlist->next != NULL)
	{
		printf("node content: %s\n", (char *)testlist->content);
		testlist = testlist->next;
	}
	if (testlist->next == NULL)
		printf("node content: %s\n", (char *)testlist->content);
	return(0);
}*/