/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 15:35:32 by luciama2          #+#    #+#             */
/*   Updated: 2023/10/15 15:38:20 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_lstsize.c			bonus
 * LIB					-
 * PROTOTYPE			int	ft_lstsize(t_lst *lst)
 * PARAMETERS			lst: the beginning of the list
 * RETURN VALUUE		int: length of the list
 * EXTERNAL FUNCTS		-
 * DESCRIPTION			counts the number of nodes in a list
 */

int	ft_lstsize(t_list *lst)
{
	t_list	*cpy;
	int		count;

	cpy = lst;
	count = 0;
	if (!cpy)
		return (0);
	while (cpy->next != NULL)
	{
		count++;
		cpy = cpy->next;
	}
	if (cpy->next == NULL)
		count++;
	return (count);
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
	
	printf("testlist size: %i\n", ft_lstsize(testlist));
	return(0);
}*/