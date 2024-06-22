#include "../libft.h"

void	*ft_freenull(char **s)
{
	if (*s == NULL)
		return (NULL);
	free(*s);
	(*s) = NULL;
	return (NULL);
}