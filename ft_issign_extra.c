/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_issign.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 20:26:15 by luciama2          #+#    #+#             */
/*   Updated: 2023/12/08 20:26:24 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_issing
 * LIB				*
 * PROTOTYPE		int issign(int c)
 * PARAMS			c: char in ascii representation to test
 * RETURN VALUES	int, 0:false, 1: true: non-zero if true
 * EXTERNAL FUNCTS	-
 * DESCRIPTION		tests '-' and '+' chars
 */

int	ft_issign(int c)
{
	int	option;

	option = 0;
	if (c == '-' || c == '+')
		option = 1;
	return (option);
}
