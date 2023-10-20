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
	size_t	wrdcount;
	size_t	i;

	i = 0;
	if (!s || s[0] == '\0')
		return (0);
	wrdcount = 1;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c)
			wrdcount++;
		i++;
	}
	return (wrdcount);
}

/* ft_strtrim_wrapper
 * LIB					-
 * PROTOTYPE			char *ft_strtrim_wrapper(char const *s, char c)
 * PARAMS				s: string to trim
 * 						c: char to trim from 's'
 * RETURN VALUES		char *,
 * EXTERNAL FUNCTS		ft_strtrim
 * DESCRIPTION			wrapper function to ft_strtrim in order to build
 * 						an string from a char
 */

static char	*ft_strtrim_wrapper(char const *s, char c)
{
	char	set[2];

	set[0] = c;
	set[1] = '\0';
	return (ft_strtrim(s, set));
}

/* ft_free_dblptr
 * LIB					-
 * PROTOTYPE			void ft_free_dblptr(char **dblptr, int start, int count)
 * PARAMS				dblptr: double pointer to free & its elements
 * 						start:  start point to free
 * 						count: double  list length, including last NULL
 * RETURN VALUES		void
 * EXTERNAL FUNCTS		free
 * DESCRIPTION			when dblptr[start] == NULL, frees up memory up to its
 * 						the dblptr[count]
 */

void	ft_free_dblptr(char **dblptr, int start, int count)
{
	while (start <= count)
		free(dblptr[start++]);
	free(dblptr);
}

/* ft_split_unwrapper
 * LIB					-
 * PROTOTYPE			char	**ft_split_unwrapper(char **lst, int count,
 * 													char const *s, char c)
 * PARAMS				lst: lst to populate w/ substrings
 * 						count: len of lst, amount of substrings
 * 						s: string to  split
 * 						c: separator char
 * RETURN VALUES		char **: list of lists with its elements (substrings)
 * EXTERNAL FUNCTS		ft_substr 		-> to populate lst
 * 						ft_free_dblptr 	-> malloc protection
 * DESCRIPTION			function to split 's' with 'c' as separator and return
 * 						a list of str with each substring. knowing the amount of
 * 						substring to allocate already
 * 						substrings' alocation is malloc-protecct
 */

char	**ft_split_unwrapper(char **lst, int count, char const *s, char c)
{
	int		i;
	size_t	j;
	int		k;

	i = ft_strlen(s);
	j = 0;
	k = count;
	lst[k--] = NULL;
	while (--i >= 0)
	{
		j++;
		if (i == 0 || (s[i] != c && s[i - 1] == c))
		{
			lst[k] = ft_substr(s, i, j);
			if (!lst[k])
			{
				ft_free_dblptr(lst, k, count);
				return (0);
			}
			k--;
		}
		if (s[i] == c)
			j = 0;
	}
	return (lst);
}

/* ft_split
 * LIB					-
 * PROTOTYPE			char **ft_split(char const *s, char c)
 * PARAMS				s: the string to be split
 * 						c: the delimiter character
 * RETURN VALUES		char **: array of new strings resulting from the split
 * 						NULL if the allocation fails
 * EXTERNAL FUNCTS		malloc
 * 						ft_strtrim_wrapper	
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
	char const		*strim = ft_strtrim_wrapper(s, c);
	int				wrdcount;

	if (!strim)
		return (0);
	wrdcount = ft_countwords(strim, c);
	wrdlist = (char **)malloc(sizeof(char *) * (wrdcount + 1));
	if (!wrdlist)
	{
		free((void *)strim);
		return (0);
	}
	wrdlist = ft_split_unwrapper(wrdlist, wrdcount, strim, c);
	if (!wrdlist)
	{
		free((void *)strim);
		return (0);
	}
	free((void *)strim);
	return (wrdlist);
}
/*
int	main(void)
{
	char	**wrdlist;
	int		i;

	wrdlist = ft_split("hello!", 32);
	i = 0;
	while (wrdlist[i] != '\0')
	{
		printf("%s\n", wrdlist[i]);
		i++;
	}
	getchar();
	return (0);
}*/
