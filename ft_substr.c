/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 17:30:02 by luciama2          #+#    #+#             */
/*   Updated: 2023/09/30 21:33:00 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_substr
 * library          -
 * prototype        char 
 *                  *ft_substr(char const *s, unsigned int start, size_t len)
 * params           s:      string from which to create the substring
 *                  start:  the start index of the substring in 's'
 *                  len:    the max length of the substring
 * return           the substring
 *                  NULL if the allocation fails
 * external functs  malloc
 * description      allocates (with malloc(3)) and returns a substring from 's'
 *                  the substring begins at start and is max of size len
*/

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *substr;
    size_t  i;

	//check if len isn't larger than ft_strlen(s)-start
    substr = (char *)malloc(sizeof(char) * (len + 1));
    if (!substr)
        return (0);
    if (!s)
        return (0);
    i = 0;
    while ((i < len) && ((i + start) < ft_strlen(s)))
	{
        substr[i] = s[i + start];
		i++;
	}
	substr[i] = '\0';
    return (substr);
}
