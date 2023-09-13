/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:46:43 by luciama2          #+#    #+#             */
/*   Updated: 2023/09/13 18:43:45 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* string.h
 *
 * int strlcpy(char *dst, const char *src, int len)
 *
 * size-bounded string copying and concatenation
 * copies up to (len - 1 ) from the src to dst, NUL terminating the 
 * result if dstsize is not 0.
 *
 * return size_t
 * length of src, srcsize
 *
 * if the return value >= dstsize, the output of the string has been truncated
 */

int	ft_strlcpy(char *dst, const char *src, int dstsize)
{
	int	srcsize;
	int	i;

	i = 0;
	if (dstsize = 0)
		return (ft_strlen(src));
	while (i++ < dstsize && src[i] != '\0')
		dst[i] = src[i];
	while (i++ <= dstsize)
		dst[i] = '\0';
	return (ft_strlen(src));
}
