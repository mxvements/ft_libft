/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlladd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:23:06 by luciama2          #+#    #+#             */
/*   Updated: 2023/12/04 17:23:08 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dlladd_back(t_dll **lst, t_dll *new)
{
	t_dll	*tmp;

	if (!lst)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		tmp = ft_dlllast(*lst);
		tmp->next = new;
	}
	return ;
}