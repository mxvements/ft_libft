/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strarrflatten_extra.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 20:30:37 by luciama2          #+#    #+#             */
/*   Updated: 2024/11/28 20:31:29 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		if (i == idx)
			tmp_sp = ft_strdup(tmp);
		else
			tmp_sp = ft_strjoin(tmp, sep);
		if (!tmp_sp)
			return (free(tmp), NULL);
		free(tmp);
		rslt = ft_strjoin(tmp_sp, sa[i]);
		if (!rslt)
			return (free(tmp_sp), NULL);
		free(tmp_sp);
	}
	return (rslt);
}
