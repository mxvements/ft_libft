/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dllsize_extra.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciammielgo <luciammielgo@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:28:56 by luciama2          #+#    #+#             */
/*   Updated: 2024/06/21 18:58:08 by luciammielg      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		ft_dllsize(t_dll *lst)
{
	t_dll	*tmp;
	int		count;

	tmp = lst;
	count = 0;
	if (!tmp)
		return (0);
	while (tmp)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}