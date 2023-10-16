/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 16:46:36 by luciama2          #+#    #+#             */
/*   Updated: 2023/10/14 15:09:24 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_memmove.c 
 * LIB:				string.h
 * PROTOTYPPE		void *memmove(void *dst, const void *src, size_t n)
 * PARAMS			dst: memory area to copy 'src'
 *					src: string to copy
 *					n: amount of bytes
 * RETURN VALUES	original value of dst
 * DESCRIPTION		copy 'n' bytes from src to dst
 * 					if 'src' and 'dst' overlap, the copy is always done in a 
 * 					non-destructive manner (memory safe).
 *					- overlaping
 * 						case 1: src overlaps with dst
 * 								-> copy in reverse, i should be int to check 0
 *							|	<src...>
 * 							| 	      <dst...>
 *						case 2: dst overlaps with src 
 *								-> copy forwards, i can be size_t, i < n
 *							|	<dst...>
 * 							| 	      <src...>
 *					- non-overlaping: memcpy
 */

#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*dstcpy;
	char	*srccpy;

	dstcpy = (char *)dst;
	srccpy = (char *)src;
	if (srccpy < dstcpy && ((size_t)(dstcpy - srccpy) < n))
	{
		i = n;
		while ((int)--i >= 0)
			dstcpy[i] = srccpy[i];
		return ((void *)dstcpy);
	}
	if (srccpy > dstcpy && ((size_t)(srccpy - dstcpy) < n))
	{
		i = 0;
		while (i < n)
		{
			dstcpy[i] = srccpy[i];
			i++;
		}
		return ((void *)dstcpy);
	}
	return (ft_memcpy(dst, src, n));
}
/*
int	main(void)
{
	char  	src[] = "lorem ipsum dolor sit a";

	printf("%s\n",(char *)(ft_memmove((void *)(src + 1), src, (size_t)8)));
	return (0);
}
*/