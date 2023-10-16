/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 18:49:54 by luciama2          #+#    #+#             */
/*   Updated: 2023/10/10 09:32:28 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_calloc
 * LIB				stdlib.h
 * PROTOTYPE		void *calloc(size_t count, size_t size)
 * PARAMS			count: amout of objects
 * 					size: size of the objects
 * RETURN VALUES	*void: pointer to allocated memory
 * 					if error, return null and set errno to ENOMEM
 * 					errno 12 ENOMEM: Cannot allocate memory
 * EXTERNAL FUNCTS	malloc
 * DESCRIPTION		memory allocation with enough space for count objects
 * 					that are size bytes of memory each and returns a 
 * 					pointerto the allocated memory filled with bytes of i
 * 					value (0)
 */

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;
	size_t	i;

	ptr = (char *)malloc(size * count);
	if (!ptr)
		return ((void *)0);
	i = 0;
	while (i < (count * size))
	{
		*(ptr + i) = '\0';
		i++;
	}
	return ((void *)ptr);
}
