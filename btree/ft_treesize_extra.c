
#include "./tree.h"

static int	ft_treesize_recursive(t_tree **root, int *count)
{
	t_tree	*node;

	node = *root;
	if (!node)
		return (*count);
	(*count)++;
	ft_treesize_recursive(&(node->left), count);
	ft_treesize_recursive(&(node->right), count);
	return (*count);
}

int	ft_treesize(t_tree **root)
{
	int	count;

	count = 0;
	return (ft_treesize_recursive(root, &count));
}
