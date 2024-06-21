/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciammielgo <luciammielgo@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:58:02 by luciama2          #+#    #+#             */
/*   Updated: 2024/06/21 18:32:40 by luciammielg      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

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
