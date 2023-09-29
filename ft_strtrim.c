/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 18:47:59 by luciama2          #+#    #+#             */
/*   Updated: 2023/09/29 18:48:01 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_strtrim
 * lib
 * prototype			char *ft_strtrim(char const *s1, const char *set)
 * params				s1: the string to be trimmed
 *						set: the reference set of character to trim
 * return				the trimmed string
 *						NULL if the allocation fails.
 * external functs		malloc
 * description			allocates (with malloc(3)) and returns a copy of s1
 *						with the characters specified in 'set' removed from the
 *						beginning and the end of the string
 * turn in files		-
*/

#include "libft.h"

char	*ft_strtrim(char const *s1, const char *set)
{
	char 			*strtrim;
	size_t const	len = ft_strlen(s1) - ft_strlen(set +1);

	strtrim = (char *)malloc(sizeof(char) * len);
	if (!strtrim)
		return(0);

}
