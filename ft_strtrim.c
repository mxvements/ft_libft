/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 18:47:59 by luciama2          #+#    #+#             */
/*   Updated: 2023/10/08 21:20:50 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_strtrim
 * LIB					-
 * PROTOTYPE			char *ft_strtrim(char const *s1, char const *set)
 * PARAMS				s1: the string to be trimmed
 *						set: the reference set of character to trim
 * RETURN				char *,	the trimmed string
 *						NULL if the allocation fails.
 * EXTERNAL FUNCTS		malloc
 *						ft_strlen(s1)
 *						ft_substr(s1, start, len)
 *						ft_getfirstindex(s1, set)
 *						ft_getlastindex(s1, set)
 *						ft_strchr(set, s1[i]), for the getindex functs
 * DESCRIPTION			allocates (with malloc(3)) and returns a copy of s1
 *						with the characters specified in 'set' removed from the
 *						beginning and the end of the string
 * TURN IN FILES		*
 * 						*/

#include "libft.h"

static int	ft_getfirstindex(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	int		flag;

	i = -1;
	while (s1[++i] != '\0')
	{
		j = -1;
		flag = 0;
		while (set[++j] != '\0')
		{
			if (s1[i] == set[j])
				flag = 1;
		}
		if (flag == 0)
			return (i);
	}
	return (i);
}

static int	ft_getlastindex(char const *s1, char const *set)
{
	size_t const	len = ft_strlen(s1);
	size_t			i;
	size_t			j;
	int				flag;

	i = 1;
	if (i > len)
		return (len);
	while ((len - i) >= 0)
	{
		j = -1;
		flag = 0;
		while (set[++j] != '\0')
		{
			if (s1[len - i] == set[j])
				flag = 1;
		}
		if (flag == 0)
			return (len - i);
		i++;
	}
	return (len - i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int const		firstindex = ft_getfirstindex(s1, set);
	int const		lastindex = ft_getlastindex(s1, set);
	size_t			len;

	len = (lastindex - firstindex) + 1;
	return (ft_substr(s1, firstindex, len));
}
/*
int	main(void)
{
	char	*s1 = "a  Hello    gbca  a";
	char	*set = "abc fjfljaf6";

	
	printf("str: \"%s\"\n", s1);
	printf("start index %d\n", ft_getfirstindex(s1, set));
	printf("last index %d\n", ft_getlastindex(s1, set));
	printf("trimmed str: \"%s\"\n", ft_strtrim(s1, set));
	return (0);
}*/
