/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:58:02 by luciama2          #+#    #+#             */
/*   Updated: 2023/09/14 10:31:10 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** * 
 * lib:				ctype.h
 * prototype:		int toupper(int c)
 * 
 * description:		Converts lower-case to the corresponding upper-case
 * returns:			Corresponding upper-case letter, otherwise the argument is
 * 					returned unchanged
 * ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	int	a;

	a = c;
	if (ft_islower(c))
		a -= 32;
	return (a);
}