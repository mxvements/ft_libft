/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:21:33 by luciama2          #+#    #+#             */
/*   Updated: 2023/10/20 16:21:35 by luciama2         ###   ########.fr       */
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

int	ft_islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
