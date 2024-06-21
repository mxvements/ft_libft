/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciammielgo <luciammielgo@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 15:55:33 by luciama2          #+#    #+#             */
/*   Updated: 2024/06/21 18:58:08 by luciammielg      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/* ft_lstlast			bonus
 * LIB					-
 * PROTOTYPE			t_list ft_llstlast(t_list *lst)
 * PARAMETERS			lst: the beginning of the list
 * RETURN VALUE			t_list, last node of the list
 * EXTERNAL FUNCTS		-
 * DESCRIPTION			return the last node of the list
 */

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last;

	last = lst;
	if (!last)
		return (NULL);
	while (last->next != NULL)
		last = last->next;
	return (last);
}
/*
int	main(void)
{
	char	*newnode1 = "hola";
	char	*newnode2 = "adios";
	char	*newnode3 = "42";
	t_list	*testlist;

	testlist = ft_lstnew(newnode1);
	ft_lstadd_front(&testlist, ft_lstnew(newnode2));
	ft_lstadd_front(&testlist, ft_lstnew(newnode3));
	
	printf("testlist last's content: %s\n", 
		(char *)ft_lstlast(testlist)->content);
	return(0);
}*/
