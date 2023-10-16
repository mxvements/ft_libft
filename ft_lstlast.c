/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 15:55:33 by luciama2          #+#    #+#             */
/*   Updated: 2023/10/15 15:58:03 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_lstlast			bonus
 * LIB					-
 * PROTOTYPE			t_list ft_llstlast(t_list *lst)
 * PARAMETERS			lst: the beginning of the list
 * RETURN VALUE			t_list, last node of the list
 * EXTERNAL FUNCTS		-
 * DESCRIPTION			return the last node of the list
 */

#include "libft.h"

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
