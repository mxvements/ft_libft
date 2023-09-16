/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:21:33 by luciama2          #+#    #+#             */
/*   Updated: 2023/09/16 16:28:44 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/* string.h
 *
 * char	*strnstr(const char *haystack, const char *needle, size_t len);
 *
 * locates the first occurrence of the null-terminate string needle in the
 * string haystack, where not more than len characters are searched.
 * Characters that appear after 
 * 
 * return
 * if needle is \0, haystack is returned
 * if needle does not occur in haytacks, null is returned
 * otherwise a pointer on the 1st char of the 1st occurrence is returned
 */

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	if (*needle == '\0')
		return ((char *)haystack);
	i = 0;
	while (i < len && haystack[i] != '\0')
	{
		j = 0;
		while (i + j < len && haystack[i + j] == needle[j])
		{
			if (needle[j + 1] == '\0')
				return ((char *)haystack + i);
			j++;
		}
		i++;
	}
	return (0);
}
