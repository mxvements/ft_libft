/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dllnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:13:13 by luciama2          #+#    #+#             */
/*   Updated: 2023/12/04 17:13:19 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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