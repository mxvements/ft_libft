/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free_extra.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 20:20:05 by luciama2          #+#    #+#             */
/*   Updated: 2024/12/12 20:27:33 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/* ft_strjoin_free
 * LIB				-
 * PROTOTYPE		char *ft_strjoin(char const *s1, char const *s2)
 * PARAMS			s1(dst): the prefix string, will be free
 *					s2(s): the suffix string
 * RETURN VALUES	char *, the new string
 *					NULL if the allocation fails.
 * EXTERNAL FUNCTS	malloc
 * DESCRIPTION		allocates (with malloc(3)) and returns a new sring, which
 * 					is the result of the concatenation of s1 and s2. Frees s1.
*/
char	*ft_strjoin_free(char **dst, char **s)
{
	char	*tmp;
	char	*s1;
	char	*s2;

	s1 = *dst;
	s2 = *s;
	tmp = ft_strdup(s1);
	if (!tmp)
		return (NULL);
	free(s1);
	s1 = ft_strjoin(tmp, s2);
	if (!s1)
	{
		free(tmp);
		return (NULL);
	}
	free(tmp);
	return (s1);
}
