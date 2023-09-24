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

/* ************************************************************************** *
 * lib			string.h
 *
 * prototype	void *memchr(const void *s, int c, size_t n)
 *
 * descr		locate the first occurrence of c (converted to unsigned char)
 * 				in str s
 *
 * return		pointer to the byte located or NULL if no such byte exists
 * 				within n bytes
 * ************************************************************************* */

#include "libft.h"

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
	return (0);
}
