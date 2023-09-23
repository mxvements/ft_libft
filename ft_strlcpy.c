/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:46:43 by luciama2          #+#    #+#             */
/*   Updated: 2023/09/23 16:21:14 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

/* string.h
 *
 * size_t	strlcpy(char *dst, const char *src, int len)
 *
 * size-bounded string copying and concatenation
 * copies up to (len - 1 ) from the src to dst, NUL terminating the 
 * result if size is not 0.
 *
 * return size_t
 * length of src, srcsize
 *
 * if the return value >= size, the output of the string has been truncated
 */

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	const size_t	srcsize = ft_strlen(src);
	unsigned int	i;

	i = 0;
	if (size == 0)
		return (srcsize);
	while ((i < (size - 1)) && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (srcsize);
}
/*
int    main(void)
{
    char *src = "";
    char dst[15];
    size_t size=3;

    printf("%s \\ %lu\n", dst, ft_strlcpy(dst, src, size));
    printf("%s \\ %lu", dst, strlcpy(dst, src, size));

    return (0);
}*/
