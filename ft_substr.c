/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 17:30:02 by luciama2          #+#    #+#             */
/*   Updated: 2023/10/01 18:39:03 by luciama2         ###   ########.fr       */
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

	if (len > ssize)
		len = ssize;
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
