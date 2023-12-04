/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlldelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:39:30 by luciama2          #+#    #+#             */
/*   Updated: 2023/12/04 17:39:31 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dlldelone(t_dll *lst, void (*del)(void *))
{
	del(lst->content);
	lst->prev->next = lst->next;
	lst->next = NULL;
	lst->prev = NULL;
	free(lst);
	return ;
}
