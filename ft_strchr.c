/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:45:43 by luciama2          #+#    #+#             */
/*   Updated: 2023/09/15 21:31:59 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

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

	cpy = (char *)s;
	while (*cpy != '\0' && *cpy != (char)c)
		cpy++;
	if (*cpy != (char)c)
		return (0);
	return (cpy);
}
/*
int	main(void)
{
	char *src1 = "there is so \0ma\0ny \0 \\0 in th\0is str\0ing !\0\0\0";
	char *src2 = "tripouillle";
	printf("%s\n", ft_strchr(src1, '\0'));
	printf("%s\n", strchr(src2, 't' + 256));
	printf("%s\n", ft_strchr(src2, 't' + 256));
	return (0);
}*/
