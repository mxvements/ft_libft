/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlladd_front_extra.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciammielgo <luciammielgo@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:22:57 by luciama2          #+#    #+#             */
/*   Updated: 2024/06/21 18:58:08 by luciammielg      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_dlladd_front(t_dll **lst, t_dll *new)
{
	t_dll *oldhead;

	if (!lst || !new)
		return ;
	
	oldhead = *lst;
	//*lst = new; //esto me da problemas con los nodos,
	new->next = oldhead;
	oldhead->prev = new;
	
	return ;
}
 