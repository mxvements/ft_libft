/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciammielgo <luciammielgo@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 20:30:16 by luciama2          #+#    #+#             */
/*   Updated: 2024/06/21 18:32:27 by luciammielg      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/* ft_isdigit
 * LIB				ctype.h
 * PROTOTYPE		int isdigit(int c)
 * PARAMS			c: char in ascii representation to test
 * RETURN VALUES	int, 0:false, 1: true: non-zero if true
 * EXTERNAL FUNCTS	-
 * DESCRIPTION		tests for decimal digit  character (ascii 48..57 included)
 */

int	ft_isdigit(int c)
{
	int	option;

	option = 0;
	if (c >= 48 && c <= 57)
		option = 1;
	return (option);
}
