/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 17:36:22 by luciama2          #+#    #+#             */
/*   Updated: 2023/09/24 18:03:19 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** *
 * lib			string.h
 *
 * prototype	int memcmp(const void *s1, const void *s2, size_t n)
 *
 * descr		compare byte string s1 against s2, both assumed n bytes long
 *
 * return		if s1 == s2 || (s1 == 0 && s2 == 0), returns (0)
 * 				else, s1 - s2
 * ************************************************************************* */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*cpy1;
	unsigned char	*cpy2;

	cpy1 = (unsigned char *)s1;
	cpy2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (cpy1[i] != cpy2[i])
			return (cpy1[i] - cpy2[i]);
		i++;
	}
	return (0);
}
