/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 19:30:18 by luciama2          #+#    #+#             */
/*   Updated: 2023/10/12 20:59:44 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_split
 * LIB					-
 * PROTOTYPE			char **ft_split(char const *s, char c)
 * PARAMS				s: the string to be split
 * 						c: the delimiter character
 * RETURN				char **: array of new strings resulting from the split
 * 						NULL if the allocation fails
 * EXTERNAL FUNCTS		malloc
 * DESCRIPTION			allocates (with malloc(3)) and returns an array of
 * 						strings obtained by splitting 's' using the character
 * 						'c' as a delimiter. The array must end with a NULL
 * 						pointer.
 */

#include "libft.h"

static size_t	ft_countwords(char const *s, char c)
{
	size_t	wordcount;
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	wordcount = 1;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c)
			wordcount++;
		i++;
	}
	return (wordcount);
}

char	**ft_split(char const *s, char c)
{
	char			**wrdlist;
	char 			*wrd;
	char const		*strim = ft_strtrim(s, c);
	size_t const	wordcount = ft_countwords(strim, c);
	size_t			i;

	wrdlist = (char **)malloc(sizeof(char *) * (wordcount + 1));
	if (!wrdlist)
		return (0);
	i = 0;
	while (i <= wordcount)
	{
		//wrdlist[i] = ft_substr(s, each start, each len)
		i++;
	}
}

