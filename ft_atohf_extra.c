/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atohf_extra.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 10:53:27 by luciama2          #+#    #+#             */
/*   Updated: 2024/01/19 10:54:28 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_hexaprefix(char *str)
{
	if (str[0] == '0' && (str[1] == 'x' || str[1] == 'X'))
		return (2);
	return (0);
}

int	ft_atohf(const char *str, int *flag)
{
	const char	*dict_m = "0123456789abcdef";
	long		x;
	int			sign;
	size_t		i;

	i = 0;
	x = 0;
	sign = 1;
	while (ft_isspace(str[i]) == 1)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	i += ft_hexaprefix((char *)(str + i));
	while (ft_strchri(dict_m, ft_tolower(str[i])) != -1)
	{
		x = (x * 16) + ft_strchri(dict_m, ft_tolower(str[i])); //tengo qu ecoger el indice
		if ((x * sign) < INT_MIN || ((sign == 1) && (x > INT_MAX)))
			*flag = 1;
		i++;
	}
	return (x * sign);
}

/*int	main(void)
{
	int nbr1 = 0xff0000;
	printf("int en hexa: %d\n", nbr1);
	char *nbr2 = "0xff0000";
	int *flag = 0;
	printf("str en hexa: %d\n", ft_atohf(nbr2, flag));
	return (0);
}*/
