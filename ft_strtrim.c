/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 18:47:59 by luciama2          #+#    #+#             */
/*   Updated: 2023/10/01 18:43:15 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_strtrim
 * LIB					-
 * PROTOTYPE			char *ft_strtrim(char const *s1, const char *set)
 * PARAMS				s1: the string to be trimmed
 *						set: the reference set of character to trim
 * RETURN				the trimmed string
 *						NULL if the allocation fails.
 * EXTERNAL FUNCTS		malloc
 * DESCRIPTION			allocates (with malloc(3)) and returns a copy of s1
 *						with the characters specified in 'set' removed from the
 *						beginning and the end of the string
 * TURN IN FILES		*
 * 						*/

#include "libft.h"

static size_t	ft_countchar(char const *s1, const char *set)
{
	size_t	count;
	char	*cpy;

	count = 0;
	cpy = (char *)s1;
	while (!cpy)
	{
		if (*cpy == *set)
			count++;
		cpy++;
	}
	return (count);
}

char	*ft_strtrim(char const *s1, const char *set)
{
	char 			*strtrim;
	size_t			i;
	size_t			j;
	size_t const	len = ft_strlen(s1) - ft_countchar(s1, set);

	strtrim = (char *)malloc(sizeof(char) * (len + 1));
	if (!strtrim)
		return(0);
	i = 0;
	j = 0;
	while (cpy[i] == *set)
		i++;
	while (cpy[i] != *set && j < len)
		strtrim[j++] = cpy[i++];
	strtrim[j] = '\0';
	return (strtrim);
}
