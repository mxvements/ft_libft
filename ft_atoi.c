/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 18:03:34 by luciama2          #+#    #+#             */
/*   Updated: 2023/09/24 20:04:21 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_atoi
 * LIB				stdlib.h
 * PROTOTYPE		int atoi(const char *str)
 * PARAMS			str: string to convert to int
 * RETURN			int representation
 * 					if no valid conversion, returns (0)
 * EXTERNAL FUNCTS	ft_isspace(int c)
 *					ft_isdigit(int c)
 * DESCRIPTION		convert initial portion of str to int representation
 * NOTES			stops whenever theres a not accepted char
 * 					first discards as many whitespace char (isspace) until the
 * 					1st non-whitespace is found
 * 					takes an optionl plus or minus sign followed by as many
 * 					base-10 digits as posisible
 *					*/

#include "libft.h"

static int	ft_isspace(int c)
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

int	ft_atoi(const char *str)
{
	char	*cpy;
	int		x;
	int		sign;
	size_t	i;

	cpy = (char *)str;
	i = 0;
	x = 0;
	sign = 1;
	while (ft_isspace(cpy[i]) == 1)
		i++;
	if (cpy[i] == '+' || cpy[i] == '-')
	{
		if (cpy[i] == '-')
			sign *= -1;
		i++;
	}
	while (ft_isdigit(cpy[i]) == 1)
	{
		x = (x * 10) + (cpy[i] - '0');
		i++;
	}
	return (x * sign);
}
