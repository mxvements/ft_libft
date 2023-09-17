/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:58:02 by luciama2          #+#    #+#             */
/*   Updated: 2023/09/13 16:31:14 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ctype.h
 * 
 * int toupper(int c)
 * converts lower-case to the corresponding upper-case
 * returns the corresponding uppercase letter, otherwise the argument is
 * returned unchanged
 */

int	ft_toupper(int c)
{
	int	a;

	a = c;
	if (ft_islower(c))
		a -= 32;
	return (a);
}
