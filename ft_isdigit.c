/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 20:30:16 by luciama2          #+#    #+#             */
/*   Updated: 2023/10/16 15:58:42 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_isdigit
 * LIB				ctype.h
 * PROTOTYPE		int isdigit(int c)
 * PARAMS			c: char in ascii representation to test
 * RETURN VALUES	int, 0:false, 1: true: non-zero if true
 * EXTERNAL FUNCTS	-
 * DESCRIPTION		tests for decimal digit  character (ascii 48..57 included)
 */

int	ft_isdigit(int c)
{
	int	option;

	option = 0;
	if (c >= 48 && c <= 57)
		option = 1;
	return (option);
}

