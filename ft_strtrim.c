/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 18:47:59 by luciama2          #+#    #+#             */
/*   Updated: 2023/10/01 21:08:32 by luciama2         ###   ########.fr       */
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

static size_t	ft_countchars(char const *s1, const char *set)
{
	size_t	count;
	size_t	i;

	count = 0;
	while (!s1)
	{
		i = 0;
		while (set[i] != '\0')
		{
			if (*s1 == *set)
				count++;
			i++;
		}
		s1++;
	}
	return (count);
}

char	*ft_strtrim(char const *s1, const char *set)
{
	char 			*strtrim;
	size_t			i;
	size_t			j;
	size_t			k;
	size_t const	len = ft_strlen(s1) - ft_countchars(s1, set);

	strtrim = (char *)malloc(sizeof(char) * (len + 1));
	if (!strtrim)
		return(0);
	i = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		k = 0;
		while (s1[i] == set[j])
			j++;
		while (s1[i] != set[j] && k < len)
			strtrim[k++] = s1[i];
		i++;	
	}
	strtrim[j] = '\0';
	return (strtrim);
}
