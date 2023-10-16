/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:46:43 by luciama2          #+#    #+#             */
/*   Updated: 2023/10/08 19:39:47 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_strlcpy.c
 * LIBRARY				string.h
 * PROTOTYPE			size_t ft_strlcpy(char *dst, 
 * 											const char *src, int dstsize)
 * PARAMS				dst: string to copy to
 * 						src: string to copy from
 * 						dstsize: size to copy (included NULL)
 * RETURN VALUES		size_t, total length of the string thet tried to create
 * EXTERNAL FUNCTS		ft_strlen(src)
 * DESCRIPTION			size-bounded string copying, copies up to (len -1)
 * 						from src to dst, NULL terminating the result if 
 * 						size != 0, room for the NULL should be included in
 * 						dstsize. If src and dst string overlap, the behaviour
 * 						is undefined. If the return value >= dstsize, the 
 * 						output of the string has been truncated.
 */

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	const size_t	srcsize = ft_strlen(src);
	unsigned int	i;

	i = 0;
	if (dstsize == 0)
		return (srcsize);
	while ((i < (dstsize - 1)) && src[i] != '\0')
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
