/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower_extra.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciammielgo <luciammielgo@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:21:33 by luciama2          #+#    #+#             */
/*   Updated: 2024/06/21 18:32:28 by luciammielg      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

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
