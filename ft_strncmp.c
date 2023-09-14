/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 11:47:06 by luciama2          #+#    #+#             */
/*   Updated: 2023/09/14 15:36:31 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* string.h
 *
 * int	strncmp(const char *s1, const char *s2, size_t n)
 *
 * compare strings, not more than n characters
 * character that appear after a '\0' are not compared
 *
 * return
 * in t >= or < 0 acording as the string s1 is >= or < than s2
 * the comparison is done using unsigned characters, so than '\200' is > '\0'
 */

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i++ < n || s1[i] != '\0')
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	return (0);
}
