/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 16:30:23 by luciama2          #+#    #+#             */
/*   Updated: 2023/10/15 16:34:48 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_lstdelone			bonus
 * LIB
 * PROTOTYPE			voif ft_lstdelone(t_list *lst, void (*del)(void*))
 * PARAMETERS			lst: the node to free
 * 						del: address of the function used to delete the node
 * RETURN VALUE			none
 * EXTERNAL FUNCTS		free
 * DESCRIPTION			takes as parameter the node and frees the memory
 * 						of the node's content using the function 'del' given
 * 						as a param and free the node
 * 						the memory 'next' must not be freed.
 */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
	return ;
}
