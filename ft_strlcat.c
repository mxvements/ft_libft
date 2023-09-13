/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:07:49 by luciama2          #+#    #+#             */
/*   Updated: 2023/09/13 18:45:10 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* string.h
 *
 * int strlcat(char *dst, char *src, int dstsize)
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

int	ft_strlcat(char *dst, char *src, int dstsize)
{
	int	i;
	int	j;

	i = ft_strlen(dst);
	j = 0;
	if (dstsize = 0 || i > dstsize)
		return (i);
	while (j++ < dstsize && src[j] != '\0')
		dst[i + j] = src[j];
	while (j++ <= dstsize)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}
