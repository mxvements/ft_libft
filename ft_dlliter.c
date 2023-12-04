/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlliter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:00:05 by luciama2          #+#    #+#             */
/*   Updated: 2023/12/04 18:00:20 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dlliter(t_dll *lst, void (*f)(void *))
{
	t_dll	*cpy;

	if (!lst | !f)
		return ;
	cpy = lst;
	while (cpy->next != NULL)
	{
		f(cpy->content);
		cpy = cpy->next;
	}
	if (cpy->next == NULL)
	{
		f(cpy->content);
	}
	return ;
}
