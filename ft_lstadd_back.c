/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 16:05:32 by luciama2          #+#    #+#             */
/*   Updated: 2023/10/15 16:09:32 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_lstadd_back		bonus
 * LIB					-
 * PROTOTYPE			void ft-lstadd_back(t_list **lst, t_list *new)
 * TURN IN FILES		-
 * PARAMETERS			lst: address to a ptr to the 1st link of a list
 * 						new: address to a ptr to the node to be added
 * RETURN VALUE			none
 * EXTERNAL FUNCTS		none
 * DESCRIPTION			adds the node 'new' at the end of the list
 */

#include "libft.h"

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
