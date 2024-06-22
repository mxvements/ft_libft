
#include "./tree.h"

static void printtabs(int numtabs)
{
	while (numtabs-- > 0)
		printf("\t");
}

static void	ft_treeiter_recursive(t_tree **root, void (*f)(void*), int level)
{
	t_tree *node;
	t_token *token;

	node = *root;
	token = node->content; //for debugging
	//printtabs(level);
	// printf(" - self: %p", node);
	// printf(" - parent: %p", node->parent);
	f(token); //ERROR
	//for debugging
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
