/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 18:49:54 by luciama2          #+#    #+#             */
/*   Updated: 2023/09/24 20:17:31 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************************************************************
 * lib			stdlib.h
 *
 * prototype	void *calloc(size_t count, size_t size)
 *
 * descr		memory allocation with enough space for count objects that
 * 				are size bytes of memory each and returns a pointer to 
 * 				the allocated memory filled with bytes of value (0)
 *
 * return		pointer to allocated memory
 * 				if error, return null and set errno to ENOMEM
 * 				errno 12 ENOMEM: Cannot allocate memory
 * *********************************************************************** */

#include "libft.h"

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
