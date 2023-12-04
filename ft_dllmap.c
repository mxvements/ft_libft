/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dllmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:06:21 by luciama2          #+#    #+#             */
/*   Updated: 2023/12/04 18:06:22 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dll	*ft_dllmap(t_dll *lst, void *(*f)(void *), void (*del)(void *))
{
	t_dll	*newdll;
	t_dll	*node;
	t_dll	*cpy;
	void	*content;

	if (!lst || !f || !del)
		rerurn (NULL);
	cpy = lst;
	newdll = NULL;
	while (cpy)
	{
		content = f(cpy->content);
		node = ft_dllnew(content);
		if (!node)
		{
			ft_dllclear(&newdll, del);
			del(content);
		}
		ft_lstadd_back(&newdll, node);
		cpy =  cpy->next
	}
	return (newdll);
}
