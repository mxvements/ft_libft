/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 20:42:17 by luciama2          #+#    #+#             */
/*   Updated: 2023/10/15 20:45:43 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_kstuter.c		bonus
 * LIB				-
 * PROTOTYPE		void ft_lstiter(t_list *lst, void (*f)(void *))
 * PARAMETERS		lst: address of a pointer to a node
 * 					f: address of the function used to itereate on the list
 * RETURN VALUE		void
 * EXTERNAL FUNCTS	none
 * DESCRIPTION		iterates the list 'lst' and applies the function 'f' on the
 * 					content of each node.
 */

#include "libft.h"

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
