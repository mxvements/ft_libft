/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strarrfree_extra.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 20:30:40 by luciama2          #+#    #+#             */
/*   Updated: 2024/11/28 20:37:59 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*strarr_free_element(char **sa)
{
	char	*tmp;

	while (*sa)
	{
		tmp = *sa;
		sa++;
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
