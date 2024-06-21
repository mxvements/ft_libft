/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlldelone_extra.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciammielgo <luciammielgo@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:39:30 by luciama2          #+#    #+#             */
/*   Updated: 2024/06/21 18:58:08 by luciammielg      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_dlldelone(t_dll *lst, void (*del)(void *))
{
	t_dll *prev;
	t_dll *next;
	del(lst->content);
	if (lst->prev != NULL)
	{
		prev = lst->prev;
		next = lst->next;
		prev->next = next;
		if (next != NULL)
			next->prev = prev;		
	}
	free(lst);
	return ;
}
