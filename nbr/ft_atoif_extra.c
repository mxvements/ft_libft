/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoif_extra.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciammielgo <luciammielgo@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 18:03:34 by luciama2          #+#    #+#             */
/*   Updated: 2024/06/21 18:58:08 by luciammielg      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/* ft_atoi
 * LIB				stdlib.h
 * PROTOTYPE		int atoi(const char *str)
 * PARAMS			str: string to convert to int
 * 					flag: int ptr to the flag that indicates int overflow
 * RETURN VALUE		int representation
 * 					if no valid conversion, returns (0)
 * EXTERNAL FUNCTS	ft_isspace(int c)
 *					ft_isdigit(int c)
 * DESCRIPTION		convert initial portion of str to int representation
 * NOTES			stops whenever theres a not accepted char
 * 					first discards as many whitespace char (isspace) until the
 * 					1st non-whitespace is found
 * 					takes an optionl plus or minus sign followed by as many
 * 					base-10 digits as posisible
 * 					updates a flag to (-1) if there is int overflow
 */

int	ft_atoif(const char *str, int *flag)
{
	char	*cpy;
	long	x;
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
		if ((x * sign) < INT_MIN || ((sign == 1) && (x > INT_MAX)))
			*flag = -1;
		i++;
	}
	return (x * sign);
}
