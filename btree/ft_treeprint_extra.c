/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treeprint_extra.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 20:21:21 by luciama2          #+#    #+#             */
/*   Updated: 2024/11/28 20:21:24 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./tree.h"

static void	printtabs(int numtabs)
{
	int	i;

	i = 0;
	while (i < numtabs)
	{
		printf("\t");
		i++;
	}
}

static void	ft_treeprint_recursive(t_tree **root, int level)
{
	t_tree		*node;
	t_content	*content;

	node = *root;
	if (!node)
	{
		printtabs(level);
		printf("---<empty>---\n");
		return ;
	}
	content = node->content;
	printtabs(level);
	printf("value: %d\n", (int)content->nbr);
	printtabs(level);
	printf("left: \n");
	ft_treeprint_recursive(&(node->left), level + 1);
	printtabs(level);
	printf("right: \n");
	ft_treeprint_recursive(&(node->right), level + 1);
	printtabs(level);
	printf("done\n");
	return ;
}

void	ft_treeprint(t_tree **root)
{
	return (ft_treeprint_recursive(root, 0));
}
