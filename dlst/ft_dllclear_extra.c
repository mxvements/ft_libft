/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dllclear_extra.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciammielgo <luciammielgo@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:44:06 by luciama2          #+#    #+#             */
/*   Updated: 2024/06/21 18:58:08 by luciammielg      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

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
