/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_i_extra.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 15:40:41 by luciama2          #+#    #+#             */
/*   Updated: 2023/12/29 15:40:43 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strchr_i(const char *s, int c)
{
	char	*cpy;
	int		i;

	cpy = (char *)s;
	i = 0;
	while (cpy[i] != '\0')
	{
		if (cpy[i] == c)
			return (i);
		i++;
	}
	return (i);
}
