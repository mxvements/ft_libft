/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dllnew_extra.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciammielgo <luciammielgo@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:13:13 by luciama2          #+#    #+#             */
/*   Updated: 2024/06/21 18:58:08 by luciammielg      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_dll	*ft_dllnew(void *content)
{
	t_dll	*newnode;

	newnode = (t_dll *)malloc(sizeof(t_dll) * 1);
	if (!newnode)
		return (0);
	newnode ->content = content;
	newnode ->next = NULL;
	newnode->prev = NULL;
	return (newnode);
}