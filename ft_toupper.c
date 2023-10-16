/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:58:02 by luciama2          #+#    #+#             */
/*   Updated: 2023/10/01 16:52:56 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_tolower
 * LIB				ctype.h
 * PROTOTYPE		int toupper(int c)
 * PARAMS			c: char to convert, in ascii representation
 * RETURN VALUES	int, converted char in ascii representation
 * EXTERNAL FUNCTS	-
 * DESCRIPTION		lower-case to upper-case conversion
 * 					if the value is a lower-case char, returns the upper-case
 * 					char, otherwise the argument is returned unchanged
 */

int	ft_toupper(int c)
{
	int	a;

	a = c;
	if (ft_islower(c))
		a -= 32;
	return (a);
}
