/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace_extra.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciammielgo <luciammielgo@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:25:34 by luciama2          #+#    #+#             */
/*   Updated: 2024/06/21 18:32:36 by luciammielg      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/* ft_isspace
 * LIB					ctype.h
 * PROTOTYPE			int ft_isspace(int c)
 * PARAMS				c: ascii representation of the char to check
 * RETURN VALUES		int, 0: false, 1:true
 * EXTERNAL FUNCTS		-
 * DESCRIPTION			checks whether a char is a is a space type of char
*/
int	ft_isspace(int c)
{
	int	option;

	option = 0;
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f'
		|| c == '\r' || c == 32)
	{
		option = 1;
	}
	return (option);
}
