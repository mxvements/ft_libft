/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciammielgo <luciammielgo@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 19:53:34 by luciama2          #+#    #+#             */
/*   Updated: 2024/06/21 18:58:08 by luciammielg      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/* ft_strrchr
 * LIB				string.h
 * PROTOTYPE		char *strrchr(const char *s, int c)
 * PARAMS			s: str to search in
 * 					c: char to search for
 * RETURN VALUES	char *, ptr to the located char
 * 					null if the char does not appear
 * EXTERNAL FUNCTS	-
 * DESCRIPTION		locate character in string, the last occurrence of c
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
	while (s <= cpy && *cpy != (char)c)
		cpy--;
	if (cpy < s)
		return (0);
	return (cpy);
}
