/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 14:38:03 by luciama2          #+#    #+#             */
/*   Updated: 2023/10/15 14:43:18 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_lstnew			bonus
 * LIB					-
 * PROTOTYPE			t_list *ft_lstnew(void *content)
 * PARAMS				content: data to create the node with
 * RETURN				t_list, new node
 * EXTERNAL FUNCT		malloc
 * DESCRIPTION			allocates (with malloc(3)) and returns a new node.
 * 						the member variable 'content' is inizialized with the
 * 						value of the param 'content'
 * 						the variable 'next' is initilized to NULL
 */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newnode;

	newnode = (t_list *)malloc(sizeof(t_list) * 1);
	if (!newnode)
		return (0);
	newnode->content = content;
	newnode->next = NULL;
	return (newnode);
}
