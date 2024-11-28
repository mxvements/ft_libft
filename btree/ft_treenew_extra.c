/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treenew_extra.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 20:21:15 by luciama2          #+#    #+#             */
/*   Updated: 2024/11/28 20:21:20 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./tree.h"

t_tree	*ft_treenew(void *content)
{
	t_tree	*treenode;

	treenode = (t_tree *)malloc(sizeof(t_tree));
	if (!treenode)
		return (NULL);
	treenode->content = content;
	treenode->left = NULL;
	treenode->right = NULL;
	treenode->parent = NULL;
	return (treenode);
}
