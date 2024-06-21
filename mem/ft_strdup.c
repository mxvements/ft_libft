/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciammielgo <luciammielgo@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 13:49:14 by luciama2          #+#    #+#             */
/*   Updated: 2024/06/21 18:58:08 by luciammielg      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/* ft_strdup
 * LIB				string.h
 * PROTOTYPE		char *ft_strdup(const char *s1)
 * PARAMS			s1: str to cpy
 * RETURN VALUES	char *, ptr to the copy of 's1'
 * EXTERNAL FUNCTS	malloc
 * DESCRIPTION		saves a cpy of the str 's1', allocating anough memory, 
 * 					doing the copy and returning the ptr to it
 * 					allocates at most 'n' char from 's1' always terminating
 * 					the copied str.
 */

char	*ft_strdup(const char *s1)
{
	char			*cpy;
	unsigned int	i;
	const size_t	srclen = ft_strlen(s1);

	cpy = (char *)malloc(sizeof(char) * (srclen + 1));
	if (!cpy)
		return ((char *)0);
	i = 0;
	while (s1[i] != '\0')
	{
		cpy[i] = s1[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
