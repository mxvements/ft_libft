/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 13:49:14 by luciama2          #+#    #+#             */
/*   Updated: 2023/09/14 15:38:33 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* string.h
 *
 * char *strdup(const char *s1, size_t n)
 *
 * save a copy  of a string, allocating enough memory for a copy of the string
 * s1, doing the copy and returning the pointer to it
 */

char	*ft_strdup(const char *s1, size_t n)
{
	char			*cpy;
	unsigned int	i;
	const size_t	srclen = ft_strlen(s1);

	cpy = (char *)malloc(sizeof(char) * (srclen + 1));
	if (!cpy)
		return ((char *)0);
	i = 0;
	while (s1[i++] != '\0')
		cpy[i] = s1[i];
	cpy[i] = '\0';
	return (cpy);
}
