/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treeiter_extra.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 20:19:45 by luciama2          #+#    #+#             */
/*   Updated: 2024/11/28 20:24:00 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./tree.h"

static void	printtabs(int numtabs)
{
	while (numtabs-- > 0)
		printf("\t");
}

static void	ft_treeiter_recursive(t_tree **root, void (*f)(void*), int level)
{
	t_tree		*node;
	t_content	*token;

	node = *root;
	token = node->content;
	f(token);
	if (node->left)
	{
		printtabs(level);
		printf(" - left:");
		ft_treeiter_recursive(&(node->left), f, level + 1);
	}
	if (node->right)
	{
		printtabs(level);
		printf(" - right:");
		ft_treeiter_recursive(&(node->right), f, level + 1);
	}
}

void	ft_treeiter(t_tree **root, void (*f)(void *))
{
	ft_treeiter_recursive(root, f, 0);
}
