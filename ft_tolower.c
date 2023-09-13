/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:14:42 by luciama2          #+#    #+#             */
/*   Updated: 2023/09/13 16:19:02 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ctype.h
 *
 * int	tolower(int c)
 * upper-case to lower-case conversion
 *
 * if the value is an upper-case char, returns the lower-case char
 * otherwise returns the argument is returned unchanged
 */

int	ft_tolower(int c)
{
	int	a;

	a = c;
	if (ft_isupper(c))
		a += 32;
	return (a);
}
