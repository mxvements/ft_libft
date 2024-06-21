/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dllmap_extra.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciammielgo <luciammielgo@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:06:21 by luciama2          #+#    #+#             */
/*   Updated: 2024/06/21 18:58:08 by luciammielg      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_dll	*ft_dllmap(t_dll *lst, void *(*f)(void *), void (*del)(void *))
{
	t_dll	*newdll;
	t_dll	*node;
	t_dll	*cpy;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
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
		ft_dlladd_back(&newdll, node);
		cpy = cpy->next;
	}
	return (newdll);
}
