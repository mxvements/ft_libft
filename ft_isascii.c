/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:37:47 by luciama2          #+#    #+#             */
/*   Updated: 2023/10/16 16:05:05 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_isascii
 * LIB				ctype.h
 * PROTOTYPE		int isascii(int c)
 * PARAMS			c: char (ascii representation) to test
 * RETURN VALUES	int, 0:false, 1:true, non-zero if true
 * EXTERNAL FUNCTS	-
 * DESCRIPTION		test for an ascii character from 0..127 both included
 */

int	ft_isascii(int c)
{
	int	option;

	option = 0;
	if (c >= 0 && c <= 127)
		option = 1;
	return (option);
}
