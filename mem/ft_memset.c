/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciammielgo <luciammielgo@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:55:02 by luciama2          #+#    #+#             */
/*   Updated: 2024/06/21 18:58:08 by luciammielg      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/* ft_memset
 * LIB				string.h
 * PROTOTYPE		void *memset(void *b, int c, size_t len)
 * PARAMS			b: memory area to fill
 * 					c: char (unsigned char) to fill the memory area
 * 					len: amount of memory to fill
 * RETURN VALUES	void *, ptr to 's'
 * EXTERNAL FUNCTS	-
 * DESCRIPTION		writes 'len' bytes of value 'c '(converted to unsigned
 * 					char to the str 'b'.
 */

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*cpy;

	i = 0;
	cpy = (char *)b;
	while (i < len)
	{
		cpy[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
