/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstrip_extra.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 20:14:00 by luciama2          #+#    #+#             */
/*   Updated: 2024/12/12 20:20:19 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/* ft_strstrip
 * LIB					-
 * PROTOTYPE			void	strip_line(char **src, size_t src_len, char c)
 * PARAMS				s1: the string to be trimmed
 *						c: char to trim
 *						src_len: length to start from
 * RETURN				void
 * EXTERNAL FUNCTS		-
 * DESCRIPTION			trims (inserts \0) a string from
 * 						src_len until src[src_len - i] != c
 */

void	ft_strstrip(char **src, size_t src_len, char c)
{
	int		i;
	char	*tmp;

	i = -1;
	tmp = *src;
	while (--src_len >= 0 && tmp[src_len] == c)
		tmp[src_len] = '\0';
}
