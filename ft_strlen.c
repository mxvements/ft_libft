/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:52:52 by luciama2          #+#    #+#             */
/*   Updated: 2023/10/08 19:25:37 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_strlen
 * LIBRARY				string.h
 * PROTOTYPE			size_t strlen(const char *s)
 * PARAMS				s: string to compute its length
 * RETURN VALUES 		size_t: number of chars 	
 * EXTERNAL FUNCTS		-
 * DESCRIPTION			compute the length of s, number of characters that
 * 						preecede NULL characterr
 */

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
