/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 20:30:02 by luciama2          #+#    #+#             */
/*   Updated: 2023/10/16 15:59:35 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_islower
 * LIB					ctype.h
 * PROTOTYPE			int islower(int c)
 * PARAMS				c: ascii representation of char
 * RETURN VALUES		int, 0: false, 1:true, non-zero if true
 * EXTERNAL FUNCTS		-
 * DESCRIPTION			checks for ascii 97 to 122 (decimal), both included
 */

static int	ft_islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

/* ft_isupper
 * LIB				ctype.h
 * PROTOTYPE		int isupper(int c)
 * PARAMS			c: ascii representation of char to check
 * RETURN VALUES	int, 0:false, 1: true, non-zero if true
 * EXTERNAL FUNCTS	-
 * DESCRIPTION		tests for ascii 65 to 90 (decimal), both included
 */

static int	ft_isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}

/* ft_isalpha
 * LIB					ctype.h
 * PROTOTYPE			int isalpha(int c)
 * PARAMS				c: char to check in ascii representation
 * RETURN VALUES		int, 0:false, 1:true, non-zero if true
 * EXTERNAL FUNCTIONS	ft_islower
 * 						ft_isupper
 * DESCRIPTION			test for any character for which ispper & islower
 * 						are true.
 */

int	ft_isalpha(int c)
{
	return (ft_isupper(c) || ft_islower(c));
}

