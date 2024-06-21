/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciammielgo <luciammielgo@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 18:16:57 by luciama2          #+#    #+#             */
/*   Updated: 2024/06/21 18:58:08 by luciammielg      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/* ft_strjoin
 * LIB				-
 * PROTOTYPE		char *ft_strjoin(char const *s1, char const *s2)
 * PARAMS			s1: the prefix string
 *					s2: the suffix string
 * RETURN VALUES	char *, the new string
 *					NULL if the allocation fails.
 * EXTERNAL FUNCTS	malloc
 * DESCRIPTION		allocates (with malloc(3)) and returns a new sring, which
 * 					is the result of the concatenation of s1 and s2
*/

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
