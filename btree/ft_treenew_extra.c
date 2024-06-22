
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
