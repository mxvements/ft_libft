/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciammielgo <luciammielgo@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:45:43 by luciama2          #+#    #+#             */
/*   Updated: 2024/06/21 18:58:08 by luciammielg      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/* ft_strchr
 * LIB				string.h
 * PROTOTYPE		char *ft_strchr(const char *s, int c)
 * PARAMS			s: str to search in
 * 					c: char to search in the memory area
 * RETURN VALUES	char *, ptr to the located char
 * 					NULL if char ddoes not appear in 's'
 * EXTERNAL FUNCTS	-
 * DESCRIPTION		locates the char (ascii representation) 'c' in 's'
 * 					the terminating null is considered as part of the string
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
