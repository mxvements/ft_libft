/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treeadd_extra.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 20:19:24 by luciama2          #+#    #+#             */
/*   Updated: 2024/11/28 20:19:27 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./tree.h"

void	ft_treeadd_left(t_tree **root, t_tree *new_node)
{
	t_tree	*node;

	node = *root;
	if (!node)
		node = new_node;
	else
	{
		if (!node->left)
		{
			node->left = new_node;
			new_node->parent = node;
		}
		else
			ft_treeadd_left(&(node->left), new_node);
	}
}

void	ft_treeadd_right(t_tree **root, t_tree *new_node)
{
	t_tree	*node;

	node = *root;
	if (!node)
		node = new_node;
	else
	{
		if (!node->right)
		{
			node->right = new_node;
			new_node->parent = node;
		}
		else
			ft_treeadd_right(&(node->right), new_node);
	}
}

/*void	ft_treeadd(t_tree **root, t_tree *new_node)
{
	t_tree		*node;
	t_content	*node_content;
	t_content	*new_content;

	node = *root;
	node_content = node->content;
	new_content = new_node->content;
	if (node_content->nbr > new_content->nbr)
	{
		if (!node->left)
			ft_treeadd_left(root, new_node);
		ft_treeadd(&(node->left), new_node);
	}
	if (node_content->nbr < new_content->nbr)
	{
		if (!node->right)
			ft_treeadd_right(root, new_node);
		ft_treeadd(&(node->right), new_node);
	}
}*/
