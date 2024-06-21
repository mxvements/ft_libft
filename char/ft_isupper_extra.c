/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper_extra.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciammielgo <luciammielgo@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:22:41 by luciama2          #+#    #+#             */
/*   Updated: 2024/06/21 18:32:37 by luciammielg      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/* ft_isupper
 * LIB				ctype.h
 * PROTOTYPE		int isupper(int c)
 * PARAMS			c: ascii representation of char to check
 * RETURN VALUES	int, 0:false, 1: true, non-zero if true
 * EXTERNAL FUNCTS	-
 * DESCRIPTION		tests for ascii 65 to 90 (decimal), both included
 */

int	ft_isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
