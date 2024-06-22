#include "../libft.h"

static char	*strarr_free_element(char **sa)
{
	char *tmp;

	while (*sa)
	{
		tmp = *sa;
		sa++;
		ft_freenull(&tmp);
		//tmp = NULL;
	}
	return (NULL);
}

char	*strarr_freenull(char ***sa)
{
	strarr_free_element(*sa);
	free(*sa);
	*sa = NULL;
	return (NULL);
}