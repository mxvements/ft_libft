/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 17:30:02 by luciama2          #+#    #+#             */
/*   Updated: 2023/10/12 20:29:41 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_substr
 * LIBRARY          -
 * PROTOTYPE        char 
 *                  *ft_substr(char const *s, unsigned int start, size_t len)
 * PARAMS           s:      string from which to create the substring
 *                  start:  the start index of the substring in 's'
 *                  len:    the max length of the substring
 * RETURN           the substring
 *                  NULL if the allocation fails
 * EXTERNAL FUNCTS  malloc
 * DESCRIPTION      allocates (with malloc(3)) and returns a substring from 's'
 *                  the substring begins at start and is max of size len
 *                  */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	size_t			i;
	size_t const	ssize = ft_strlen(s);

	if (!s)
		return (0);
	if (ssize < start)
		len = 0;
	if (len > (ssize - start))
		len = ssize - start;
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (0);
	i = 0;
	while ((i < len) && ((i + start) < ssize))
	{
		substr[i] = s[i + start];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

/*
int	main(void)
{
	char	s1[]="tripouille";
	char	s2[]="1";
	char	s3[]="0123456789";
	char	*s;

	s = ft_substr(s1, 100, 1); //el problema de este es el start
	printf("%s -> %s\n", s1, s);
	free (s);
	//check(!strcmp(s, ""));
	//mcheck(s, 1); free(s); showLeaks();

	s = ft_substr(s2, 42, 42000000); //el problema de este es el len
	printf("%s -> %s\n", s2, s);
	free (s);
	//check(!strcmp(s, ""));
	//mcheck(s, 1); free(s); free(str); showLeaks();

	s = ft_substr(s3, 9, 10);
	printf("%s -> %s\n", s3, s);
	free (s);
	//check(!strcmp(s, "9"));
	//mcheck(s, 2); free(s); free(str); showLeaks();

	return (0);
}*/