
#include "./tree.h"

static int	ft_treedepth_recursive(t_tree **root, t_tree *target, int depth)
{
	int	depth_left;
	int	depth_right;

	if (*root == target)
		return (depth);
	if (!(*root))
		return (-1);
	depth++;
	depth_left = ft_treedepth_recursive(&((*root)->left), target, depth);
	depth_right = ft_treedepth_recursive(&((*root)->right), target, depth);
	if (depth_left > 0)
		return (depth_left);
	return (depth_right);
}

int	ft_treedepth(t_tree **root, t_tree *target)
{
	return (ft_treedepth_recursive(root, target, 0));
}

t_tree	*ft_treelast(t_tree **root)
{
	t_tree	*node;
	t_tree	*last_left;
	t_tree	*last_right;
	int		last_left_depth;
	int		last_right_depth;

	node = *root;
	last_left_depth = 0;
	last_right_depth = 0;
	if (!node->left && !node->right)
		return (node);
	if (node->left)
	{
		last_left = ft_treelast(&(node->left));
		last_left_depth = ft_treedepth(root, last_left);
	}
	if (node->right)
	{
		last_right = ft_treelast(&(node->right));
		last_right_depth = ft_treedepth(root, last_right);
	}
	if (last_left_depth >= last_right_depth)
		return (last_left);
	return (last_right);
}
