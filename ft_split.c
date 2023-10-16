/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 19:30:18 by luciama2          #+#    #+#             */
/*   Updated: 2023/10/13 20:18:20 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_countwords
 * LIB					-
 * PROTOTYPE			size_t ft_countwords(char const *s, char c)
 * PARAMS				s: str to count words
 * 						c: char to check as separator
 * RETURN VALUES		size_t, amount of words in str
 * 						if s == NULL of s = "", returns 0
 * EXTERNAL FUNCTS		-
 * DESCRIPTION			counts the amount of words in 'str' using 'c' char as
 * 						word separator
 */

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

/* ft_strtrimwrapper
 * LIB					-
 * PROTOTYPE			char *ft_strtrimwrapper(char const *s, char c)
 * PARAMS				s: string to trim
 * 						c: char to trim from 's'
 * RETURN VALUES		char *,
 * EXTERNAL FUNCTS		ft_strtrim
 * DESCRIPTION			wrapper function to ft_strtrim in order to build
 * 						an string from a char
 */

static char	*ft_strtrimwrapper(char const *s, char c)
{
	char	set[2];

	set[0] = c;
	set[1] = '\0';
	return (ft_strtrim(s, set));
}

/* ft_split
 * LIB					-
 * PROTOTYPE			char **ft_split(char const *s, char c)
 * PARAMS				s: the string to be split
 * 						c: the delimiter character
 * RETURN VALUES		char **: array of new strings resulting from the split
 * 						NULL if the allocation fails
 * EXTERNAL FUNCTS		malloc
 * 						ft_strtrimwrapper	
 * 						ft_substr
 * 						ft_countwords
 * DESCRIPTION			allocates (with malloc(3)) and returns an array of
 * 						strings obtained by splitting 's' using the character
 * 						'c' as a delimiter. The array must end with a NULL
 * 						pointer.
 */

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
