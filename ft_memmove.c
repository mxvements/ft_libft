/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 16:46:36 by luciama2          #+#    #+#             */
/*   Updated: 2023/10/13 22:12:18 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_memmove.c 
 * lib				string.h
 * prototyppe		void	*memmove(void *dst, const void *src, size_t len)
 * param			dst: 
 *					src:
 *					len:
 * description		copy len bytes from src to dst
 * 					if src and dst overlap, the copy is always done in a 
 * 					non-destructive manner.
 * return			original value of dst
 */

#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*dstcpy;
	char	*srccpy;

	dstcpy = (char *)dst;
	srccpy = (char *)src;
	if (srccpy < dstcpy && ((size_t)(dstcpy - srccpy) < len))
	{
		i = len;
		while (--i > 0)
			dstcpy[i] = srccpy[i];
		return ((void *)dstcpy);
	}
	if (srccpy > dstcpy && ((size_t)(srccpy - dstcpy) < len))
	{
		i = 0 - 1;
		while (++i < len)
			dstcpy[i] = srccpy[i];
		return ((void *)dstcpy);
	}
	return (ft_memcpy(dst, src, len));
}

int	main(void)
{
	char  	src[] = "lorem ipsum dolor sit a";
	
	printf("%s\n",memmove((void *)(src + 1), src, 8));
	return (0);
}
