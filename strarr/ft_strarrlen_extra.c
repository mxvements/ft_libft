#include "../libft.h"

int	strarr_len(char **sa)
{
	int	i;

	i = 0;
	while (sa[i])
		i++;
	return (i);
}
