/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dllclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:44:06 by luciama2          #+#    #+#             */
/*   Updated: 2023/12/04 17:44:07 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dllclear(t_dll **lst, void (*del)(void *))
{
	t_dll	*cpy;
	t_dll	*tmp;

	if (!lst || *lst == NULL)
		return ;
	cpy = *lst;
	while (cpy)
	{
		tmp = cpy;
		cpy = tmp->next;
		cpy->prev = NULL;
		del(tmp->content);
		free(tmp);
	}
	*lst = NULL; //need to check this
	return ;

}
