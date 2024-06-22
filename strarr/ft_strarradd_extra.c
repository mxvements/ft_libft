#include "../libft.h"

char **strarr_add(char **sa_src, char *s)
{
	char **sa_dst;
	int		i;
	int const len = strarr_len(sa_src);

	sa_dst = (char **)ft_calloc(len + 2, sizeof(char *));
	i = 0;
	while (sa_src[i])
	{
		sa_dst[i] = ft_strdup(sa_src[i]);
		if (!sa_dst[i])
			return ((char **)strarr_freenull(&sa_dst));
		i++;
	}
	sa_dst[i] = ft_strdup(s);
	if (!sa_dst[i])
		return ((char **)strarr_freenull(&sa_dst));
	sa_dst[i + 1] = NULL;
	strarr_freenull(&sa_src);
	return (sa_dst);
}
