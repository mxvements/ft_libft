/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciammielgo <luciammielgo@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:14:42 by luciama2          #+#    #+#             */
/*   Updated: 2024/06/21 18:32:39 by luciammielg      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

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
