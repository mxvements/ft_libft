/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:55:02 by luciama2          #+#    #+#             */
/*   Updated: 2023/09/16 16:33:54 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
