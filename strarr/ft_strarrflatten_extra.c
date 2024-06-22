#include "../libft.h"

char	*strarr_flatten(int idx, char **sa, char *sep)
{
	int		i;
	char	*tmp;
	char	*tmp_sp;
	char	*rslt;

	i = idx - 1;
	rslt = ft_strdup("");
	if (!rslt)
		return (NULL);
	while (sa[++i])
	{
		tmp = rslt;
		if (i == idx) //en el primero no
			tmp_sp = ft_strdup(tmp);
		else
			tmp_sp = ft_strjoin(tmp, sep);
		if (!tmp_sp) //protection
			return (free(tmp), NULL);
		free(tmp);
		//printf("starr_flatten: [%s]\n", tmp_sp);
		rslt = ft_strjoin(tmp_sp, sa[i]);
		if (!rslt)
			return (free(tmp_sp), NULL);
		free(tmp_sp);
	}
	return (rslt);
}