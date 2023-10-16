/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:14:42 by luciama2          #+#    #+#             */
/*   Updated: 2023/10/16 15:57:24 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}

/* ft_tolower
 * LIB				ctype.h
 * PROTOTYPE		int tolower(int c)
 * PARAMS			c: char to convert, in ascii representation
 * RETURN VALUES	int, converted char in ascii representation
 * EXTERNAL FUNCTS	-
 * DESCRIPTION		upper-case to lower-case conversion
 * 					if the value is an upper-case char, returns the lower-case
 * 					char, otherwise the argument is returned unchanged
 */

int	ft_tolower(int c)
{
	int	a;

	a = c;
	if (ft_isupper(c))
		a += 32;
	return (a);
}

