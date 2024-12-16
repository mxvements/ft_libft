/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strarrfree_extra.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 20:30:40 by luciama2          #+#    #+#             */
/*   Updated: 2024/12/16 20:07:55 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*strarr_free_element(char **sa)
{
	const int	len = strarr_len(sa);
	char	*tmp;
	int		i;

	i = -1;
	while (sa[++i] && i < len)
	{
		tmp = sa[i];
		ft_freenull(&tmp);
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
