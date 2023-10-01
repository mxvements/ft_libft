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

/* 
 * LIB				ctype.h
 * PROTOTYPE		int toupper(int c)
 * DESCRIPTION		converts lower-case to the corresponding upper-case
 * RETURNS			corresponding upper-case letter, otherwise the argument is
 * 					returned unchanged
 * 					*/

#include "libft.h"

int	ft_toupper(int c)
{
	int	a;

	a = c;
	if (ft_islower(c))
		a -= 32;
	return (a);
}
