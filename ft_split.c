/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 19:30:18 by luciama2          #+#    #+#             */
/*   Updated: 2023/10/13 20:14:52 by luciama2         ###   ########.fr       */
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
	if (!s || s[0] == '\0')
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

static char	*ft_strtrimwrapper(char const *s, char c)
{
	char	set[2];

	set[0] = c;
	set[1] = '\0';
	return (ft_strtrim(s, set));
}

char	**ft_split(char const *s, char c)
{
	char			**wrdlist;
	char const		*strim = ft_strtrimwrapper(s, c);
	int				wordcount;
	int				i;
	size_t			charcount;

	wordcount = ft_countwords(strim, c);
	wrdlist = (char **)malloc(sizeof(char *) * (wordcount + 1));
	if (!wrdlist)
		return (0);
	i = ft_strlen(strim) - 1;
	charcount = 0;
	wrdlist[wordcount--] = NULL;
	while (i >= 0)
	{
		charcount++;
		if (i == 0 || (strim[i] != c && strim[i - 1] == c))
			wrdlist[wordcount--] = ft_substr(strim, i, charcount);
		if (strim[i] == c)
			charcount = 0;
		i--;
	}
	free((void *)strim);
	return (wrdlist);
}
/*
int	main(void)
{
	char	**wrdlist;
	int		i;

	wrdlist = ft_split("gggggggggg", 'g');
	i = 0;
	while (wrdlist[i] != '\0')
	{
		printf("%s\n", wrdlist[i]);
		i++;
	}
	getchar();
	return (0);
}*/
