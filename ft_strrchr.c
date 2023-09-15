/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 19:53:34 by luciama2          #+#    #+#             */
/*   Updated: 2023/09/15 22:18:41 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* string.h
 *
 * char *strrchr(const char *s, int c)
 * locate character in string, the last occurrence of c
 *
 * '\0' is considered to be part of the string
 * returns a pointer to the located character, or NULL if the character does
 * not appear
 */

char	*ft_strrchr(const char *s, int c)
{
	char			*cpy;
	const size_t	srcsize = ft_strlen(s);
	unsigned int	i;

	i = srcsize;
	cpy = (char *)s + i;
	if ((char)c == '\0')
		return (cpy);
	cpy--;
	while(s <= cpy && *cpy != (char)c)
		cpy--;
	if (cpy < s)
		return (0);
	return (cpy);
}
