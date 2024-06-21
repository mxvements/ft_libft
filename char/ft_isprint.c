/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciammielgo <luciammielgo@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:45:19 by luciama2          #+#    #+#             */
/*   Updated: 2024/06/21 18:32:32 by luciammielg      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

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
