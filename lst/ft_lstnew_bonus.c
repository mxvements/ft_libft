/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciammielgo <luciammielgo@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 19:31:40 by luciama2          #+#    #+#             */
/*   Updated: 2024/06/21 18:58:08 by luciammielg      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/* ft_lstnew			bonus
 * LIB					-
 * PROTOTYPE			t_list *ft_lstnew(void *content)
 * PARAMS				content: data to create the node with
 * RETURN				t_list, new node
 * EXTERNAL FUNCT		malloc
 * DESCRIPTION			allocates (with malloc(3)) and returns a new node.
 * 						the member variable 'content' is inizialized with the
 * 						value of the param 'content'
 * 						the variable 'next' is initilized to NULL
 */

t_list	*ft_lstnew(void *content)
{
	t_list	*newnode;

	newnode = (t_list *)malloc(sizeof(t_list) * 1);
	if (!newnode)
		return (0);
	newnode->content = content;
	newnode->next = NULL;
	return (newnode);
}
/*
int	main(void)
{
	char	*newnode = "hola";
	t_list	*testlist;

	testlist = ft_lstnew(newnode);
	//print node's content and next's node
	while (testlist->next != NULL)
	{
		printf("node content: %s\n", (char *)testlist->content);
		testlist = testlist->next;
	}
	if (testlist->next == NULL)
		printf("node content: %s\n", (char *)testlist->content);

	return (0);
}*/