/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strarradd_extra.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 20:30:30 by luciama2          #+#    #+#             */
/*   Updated: 2024/12/16 20:08:03 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	**strarr_add(char **sa_src, char *s)
{
	char		**sa_dst;
	int			i;
	int const	len = strarr_len(sa_src);

	sa_dst = (char **)ft_calloc(len + 2, sizeof(char *));
	if (!sa_dst)
		return (NULL);
	i = 0;
	while (sa_src && sa_src[i])
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
	if (sa_src && *sa_src)
		strarr_freenull(&sa_src);
	return (sa_dst);
}
