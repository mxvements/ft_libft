/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 15:23:01 by luciama2          #+#    #+#             */
/*   Updated: 2023/10/15 15:27:11 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_lstadd_front		bonus
 * LIB					-
 * PROTOTYPE			void ft_lstadd_front(t_list **lst, t_list *new)
 * TURN IN FILES		-
 * PARAMETERS			lst: address of a pointer to the 1st link of a list
 * 						new: address of a ptr to the node to be added to list
 * RETURN VALUE			void
 * EXTERNAL FUNCTS		none
 * DESCRIPTION			ads the node 'new' at the beginning of the list
 */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
	return ;
}
