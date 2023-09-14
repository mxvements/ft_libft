/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:07:49 by luciama2          #+#    #+#             */
/*   Updated: 2023/09/14 15:57:44 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* string.h
 *
 * size_t strlcat(char *dst, const char *src, size_t dstsize)
 * size-bounded string copying and concatenation
 *
 * appends string src to the end of dst, 
 * it will append at most dstsize - strlen(dst) -1
 * it will then nul terminate, unles dstsize is 0 or the original dst string was
 * longer than dstsize
 *
 * returns the total length of the string it tries to create
 * (dstsize + srcsize)
 */

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	const size_t	dstlen = ft_strlen(dst);
	const size_t	srclen = ft_strlen(src);
	unsigned int	j;

	j = 0;
	if (dstsize == 0 || dstlen >= dstsize)
		return (dstlen);
	while (j++ < dstsize && src[j] != '\0')
		dst[dstlen + j] = src[j];
	while (j++ <= dstsize)
		dst[dstlen + j] = '\0';
	return (dstlen + srclen);
}

int	main(void)
{
	
}
