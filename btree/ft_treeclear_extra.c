
#include "./tree.h"

static void	strarr_free(char **strarr)
{
	while(strarr)
	{
		free(strarr);
		strarr++;
	}
}

void	del_token(void *content)
{
	t_token	*token;

	token = content;
	if (token->line)
		free(token->line);
	if (token->cmd)
		free(token->cmd);
	if (token->arg)
	{
		strarr_free(token->arg);
		free(token->arg);
	}
	if (token->file)
		free(token->file);
	if (token->varname)
		free(token->varname);
	free(token);
}

void	del(void *content)
{
	free(content);
}

void	ft_treeclear(t_tree **root, void (*del)(void *))
{
	if (!(*root))
		return ;
	if ((*root)->left)
		ft_treeclear(&((*root)->left), del);
	if ((*root)->right)
		ft_treeclear(&((*root)->right), del);
	del((*root)->content);
	(*root)->content = NULL;
	free(*root);
	(*root) = NULL;
}
