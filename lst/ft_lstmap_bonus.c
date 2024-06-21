/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciammielgo <luciammielgo@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 21:20:24 by luciama2          #+#    #+#             */
/*   Updated: 2024/06/21 18:58:08 by luciammielg      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

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
 * 					ft_lstnew
 * 					ft_lstclear
 * 					ft_lstadd_back
 * DESCRIPTION		iterates the list 'lst' and applies the funcion 'f' on the
 * 					content of each node.
 * 					creates a new list resulting of the successive applications
 * 					of the function 'f'
 * 					the 'del' function is used to delete the content of a node
 * 					if needed
*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*node;
	t_list	*cpy;
	void	*nodecontent;

	if (!lst || !f || !del)
		return (NULL);
	cpy = lst;
	newlst = NULL;
	while (cpy)
	{
		nodecontent = f(cpy->content);
		node = ft_lstnew(nodecontent);
		if (!node)
		{
			ft_lstclear(&newlst, del);
			del(nodecontent);
		}
		ft_lstadd_back(&newlst, node);
		cpy = cpy->next;
	}
	return (newlst);
}
/*
void	*ft_toupper_wrapper(void *s)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)s;
	if (!s || str[i] == '\0')
		return (s);
	while (str[i] != '\0')
	{
		str[i] = ft_toupper(str[i]);
		i++;
	}
	return (s);
}

void	ft_nodefree(void *content)
{
	free(content);
	return ;
}

void	ft_lstdelone_wrapper(t_list *node, t_list *head)
{
	t_list	*ptr;

	ptr = head;
	while ((ptr->next) != node)
		ptr = ptr->next;
	if (ptr->next == node)
	{
		ptr->next = node->next;
		ft_lstdelone(node, &ft_nodefree);
	}
	return ;
}

int	main(void)
{
	char	*newnode1 = "hola";
	char	*newnode2 = "adios";
	char	*newnode3 = "42";
	char	*newnode4 = "mad";
	t_list	*testlist = ft_lstnew(ft_strdup(newnode1));
	t_list	*node2 = ft_lstnew(ft_strdup(newnode2));
	t_list	*node3 = ft_lstnew(ft_strdup(newnode3));
	t_list	*node4 = ft_lstnew(ft_strdup(newnode4));
	t_list	*tr_testlist;

	ft_lstadd_back(&testlist, node2);
	ft_lstadd_back(&testlist, node3);
	ft_lstadd_back(&testlist, node4);

	ft_lstdelone_wrapper(node3, testlist);

	tr_testlist = ft_lstmap(testlist, &ft_toupper_wrapper, &ft_nodefree);

	while (tr_testlist->next != NULL)
	{
		printf("node content: %s\n", (char *)tr_testlist->content);
		tr_testlist = tr_testlist->next;
	}
	if (tr_testlist->next == NULL)
		printf("node content: %s\n", (char *)tr_testlist->content);

	return (0);
}*/