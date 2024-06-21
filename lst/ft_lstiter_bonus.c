/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciammielgo <luciammielgo@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 20:42:17 by luciama2          #+#    #+#             */
/*   Updated: 2024/06/21 18:58:08 by luciammielg      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/* ft_kstuter.c		bonus
 * LIB				-
 * PROTOTYPE		void ft_lstiter(t_list *lst, void (*f)(void *))
 * PARAMETERS		lst: address of a pointer to a node
 * 					f: address of the function used to itereate on the list
 * RETURN VALUE		void
 * EXTERNAL FUNCTS	-
 * DESCRIPTION		iterates the list 'lst' and applies the function 'f' on the
 * 					content of each node.
 */

void	ft_lstiter(t_list *lst, void (*f)(void*))
{
	t_list	*cpy;

	if (!lst || !f)
		return ;
	cpy = lst;
	while (cpy->next != NULL)
	{
		f(cpy->content);
		cpy = cpy->next;
	}
	if (cpy->next == NULL)
		f(cpy->content);
	return ;
}
/*
void	ft_toupper_wrapper(void *s)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)s;
	if (!s || str[i] == '\0')
		return ;
	while(str[i] != '\0')
	{
		str[i] = ft_toupper(str[i]);
		i++;
	}
	return ;
}

int	main(void)
{
	char	*newnode1 = "hola";
	char	*newnode2 = "adios";
	char	*newnode3 = "42";
	t_list	*testlist = ft_lstnew(ft_strdup(newnode1));
	t_list	*node2 = ft_lstnew(ft_strdup(newnode2));
	t_list	*node3 = ft_lstnew(ft_strdup(newnode3));

	ft_lstadd_back(&testlist, node2);
	ft_lstadd_back(&testlist, node3);

	ft_lstiter(testlist, &ft_toupper_wrapper);

	while (testlist->next != NULL)
	{
		printf("node content: %s\n", (char *)testlist->content);
		testlist = testlist->next;
	}
	if (testlist->next == NULL)
		printf("node content: %s\n", (char *)testlist->content);

	return (0);
}*/
