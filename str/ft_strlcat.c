/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciammielgo <luciammielgo@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:07:49 by luciama2          #+#    #+#             */
/*   Updated: 2024/06/21 18:58:08 by luciammielg      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/* ft_strlcat
 * LIB				string.h
 * PROTOTYPE		size_t ft_strlcat(char *dst, const char *src, size_t size)
 * PARAMS			dst:
 * 					src:
 * 					size:
 * RETURN VALUES	size_t, total length of the string it tries to create
 * 					(size + srcsize)
 * EXTERNAL FUNCTS	-
 * DESCRIPTION		size-bounded string copying and concatenation, appends
 * 					string src to the end of dst, it will append at most 
 * 					size - strlen(dst) -1
 * 					it will then nul terminate, unles size is 0 or the 
 * 					original dst string was longer than size
 */
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	const size_t	dstlen = ft_strlen(dst);
	const size_t	srclen = ft_strlen(src);
	unsigned int	i;

	i = 0;
	if (!src || !*src)
		return (dstlen);
	if (size <= dstlen)
		return (size + srclen);
	while (i < (size - dstlen - 1) && src[i] != '\0')
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}
/*
int	main(void)
{
	const char	*str = "a";
	char		dst1[100] = "Hello";
	char		dst2[100] = "Hello";
	size_t		size = 5;

	printf("%s, %s, %zu\n", dst1, str, strlcat(dst1, str, size));
	printf("new buffer1: %s\n", dst1);
	
	printf("%s, %s, %zu\n", dst2, str, ft_strlcat(dst2, str, size));
	printf("new buffer2: %s\n", dst2);
	return (0);
}*/
