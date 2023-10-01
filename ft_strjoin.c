/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 18:16:57 by luciama2          #+#    #+#             */
/*   Updated: 2023/10/01 16:29:07 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_strjoin
 * lib				-
 * prototype		char *ft_strjoin(char const *s1, char const *s2)
 * params			s1: the prefix string
 *					s2: the suffix string
 * return			the new string
 *					NULL if the allocation fails.
 * external functs	malloc
 * description		allocates (with malloc(3)) and returns a new sring, which
					is the result of the concatenation of s1 and s2
 * turn in files	-
*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*strjoin;
	char const		*cpy1;
	char const		*cpy2;
	size_t			i;
	size_t const	len = ft_strlen(s1) + ft_strlen(s2);

	cpy1 = s1;
	cpy2 = s2;
	strjoin = (char *)malloc(sizeof(char) * (len + 1));
	if (!strjoin)
		return (0);
	i = 0;
	while (*cpy1 != '\0' && i < len)
	{
		strjoin[i++] = *cpy1;
		cpy1++;
	}
	while (*cpy2 != '\0' && i < len)
	{
		strjoin[i++] = *cpy2;
		cpy2++;
	}
	strjoin[i] = '\0';
	return (strjoin);
}
