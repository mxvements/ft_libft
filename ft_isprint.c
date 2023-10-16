/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:45:19 by luciama2          #+#    #+#             */
/*   Updated: 2023/10/16 16:05:24 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_isprint
 * LIB				ctype.h
 * PROTOTYPE		int isprint(int c)
 * PARAMS			c: char in ascii representation to test
 * RETURN VALUES	int, 0:false, 1: true: non-zero if true
 * EXTERNAL FUNCTS	-
 * DESCRIPTION		tests for any printing character, ascii 32..126 included
 */
int	ft_isprint(int c)
{
	int	option;

	option = 0;
	if (c >= 32 && c <= 126)
		option = 1;
	return (option);
}
