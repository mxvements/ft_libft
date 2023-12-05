/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dllmap_extra.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmmielgo <lmmielgo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:06:21 by luciama2          #+#    #+#             */
/*   Updated: 2023/12/05 15:11:39 by lmmielgo         ###   ########.fr       */
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
