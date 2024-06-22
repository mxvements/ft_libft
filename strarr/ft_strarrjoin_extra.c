#include "../libft.h"

char	**strarr_join(char **sa1, char **sa2)
{
	char 		**sa_rslt;
	const int	sa1_len = strarr_len(sa1);
	const int	sa2_len = strarr_len(sa2);
	int			i;
	int			j;

	sa_rslt = (char **)ft_calloc(sa1_len + sa2_len + 1, sizeof(char *));
	if (!sa_rslt)
		return (NULL);
	i = -1;
	while (sa1[++i])
	{
		sa_rslt[i] = ft_strdup(sa1[i]);
		if (!sa_rslt[i])
		{
			strarr_free_element(sa_rslt);
			free(sa_rslt);
			return (NULL);
		}
	}
	j = -1;
	while (sa2[++j])
	{
		sa_rslt[i + j] = ft_strdup(sa2[j]);
		if (!sa_rslt[i + j])
		{
			strarr_free_element(sa_rslt);
			free(sa_rslt);
			return (NULL);
		}
	}
	sa_rslt[i + j] = NULL;
	return (sa_rslt);
}