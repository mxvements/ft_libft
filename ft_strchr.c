/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:45:43 by luciama2          #+#    #+#             */
/*   Updated: 2023/09/14 15:26:26 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* string.h
 *
 * char *strchr(const char *s, int c)
 * locate character in string
 * the first occurrence of c (converted to char) in the string pointed by s
 * the terminating null char is considered to be part of the string
 *
 * return
 * pointer to the located character or null if the character does not appear
 * in the string.
 */

char	*ft_strchr(const char *s, int c)
{
	char	*cpy;

	cpy = s;
	while (*cpy != '\0' && *cpy != c)
		cpy++;
	if (c == '\0' || *cpy != c)
		cpy++;
	return (cpy);
}
