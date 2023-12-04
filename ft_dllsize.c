/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dllsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:28:56 by luciama2          #+#    #+#             */
/*   Updated: 2023/12/04 17:28:57 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_dllsize(t_dll *lst)
{
	t_dll	*tmp;
	int		count;

	tmp = lst;
	count = 0;
	if (!tmp)
		return (0);
	while (tmp->next != NULL)
	{
		count++;
		tmp = tmp->next;
	}
	if (tmp->next == NULL)
		count++;
	return (count);
}