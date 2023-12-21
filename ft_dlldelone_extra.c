/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlldelone_extra.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmmielgo <lmmielgo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:39:30 by luciama2          #+#    #+#             */
/*   Updated: 2023/12/06 15:12:52 by lmmielgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dlldelone(t_dll *lst, void (*del)(void *))
{
	t_dll	*prev;
	t_dll	*next;

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
