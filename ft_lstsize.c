/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 15:35:32 by luciama2          #+#    #+#             */
/*   Updated: 2023/10/15 15:38:20 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_lstsize.c			bonus
 * LIB					-
 * PROTOTYPE			int	ft_lstsize(t_lst *lst)
 * TURN IN FILES		-
 * PARAMETERS			lst: the beginning of the list
 * RETURN VALUUE		int: length of the list
 * EXTERNAL FUNCTS		none
 * DESCRIPTION			counts the number of nodes in a list
 */

#include "libft.h"

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
