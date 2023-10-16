/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 17:09:29 by luciama2          #+#    #+#             */
/*   Updated: 2023/09/24 17:36:00 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_memchr
 * LIB				string.h
 * PROTOTYPE		void *ft_memchr(const void *s, int c, size_t n)
 * PARAMS			s: string (mem area) to searach for c
 * 					c: char to search
 * 					n: amount of bytes to search
 * RETURN VALUES	void *, ptr to the 1st matching byte to 'c' in 's'
 * 					if 'c' is not in 's', return 0 (NULL)
 * EXTERNAL FUNCTS	-
 * DESCRIPTION		scans 'n' bytes form 's' to search for the 1st instance
 * 					of 'c'
 * 					both c and s are interpreted as unsigned char
 */

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*cpy;

	i = 0;
	cpy = (unsigned char *)s;
	while (i < n)
	{
		if (cpy[i] == (unsigned char)c)
			return ((void *)cpy + i);
		i++;
	}
	return (NULL);
}
