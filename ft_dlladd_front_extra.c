/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlladd_front_extra.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmmielgo <lmmielgo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:22:57 by luciama2          #+#    #+#             */
/*   Updated: 2023/12/06 16:55:56 by lmmielgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dlladd_front(t_dll **lst, t_dll *new)
{
	t_dll	*oldhead;

	if (!lst || !new)
		return ;
	oldhead = *lst;
	new->next = oldhead;
	oldhead->prev = new;
	return ;
}
