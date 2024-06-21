/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciammielgo <luciammielgo@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 11:47:06 by luciama2          #+#    #+#             */
/*   Updated: 2024/06/21 18:58:08 by luciammielg      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/* ft_strncmp
 * LIB				string.h
 * PROTOTYPE		int ft_strncmp(const char *s1, const char *s2, size_t n)
 * PARAMS			s1:
 * 					s2:
 * 					n:
 * RETURN VALUES	int, s1-s2 converted to unsigned char
 * 					return NULL if n = 0
 * EXTERNAL FUNCTS	-
 * DESCRIPTION		compare strings, not more than n characters
 * 					compare strings, not more than n characters
 * 					the comparison is done using unsigned characters, so than 
 * 					'\200' is > '\0'
 */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i] || s1[i] == '\0')
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
