/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dllfree_extra.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 20:22:01 by luciama2          #+#    #+#             */
/*   Updated: 2023/12/28 20:22:03 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dllfree(t_dll **head)
{
	t_dll	*tmp;
	t_dll	*tmpnext;

	tmp = *head;
	while (tmp != NULL)
	{
		tmpnext = tmp->next;
		free(tmp->content);
		tmp->content = NULL;
		free(tmp);
		tmp = tmpnext;
	}
	//free(head);
}
