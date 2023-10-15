/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:50:52 by luciama2          #+#    #+#             */
/*   Updated: 2023/10/15 13:57:59 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_itoca
 * LIB					-
 * PROTOTYPE			char *ft_itoa(int n)
 * PARAMS				n: the int to convert
 * RETURN				char *: string representing the integer
 * 						NULL if allocaation fails
 * EXTERNAL FUNCTS		malloc
 * DESCRIPTION			allocates (with malloc(3)) and returns a string
 * 						representing the int received as an argument.
 * 						Negative numbers must be handled.. 
 */

#include "libft.h"

static size_t	ft_countdigits(int n)
{
	size_t		count;
	long long	nl;

	count = 0;
	nl = (long long) n;
	if (nl == 0)
		return (1);
	if (nl < 0)
	{
		count++;
		nl *= -1;
	}
	while (nl > 0)
	{
		count++;
		nl /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char			*rslt;
	size_t const	digitcount = ft_countdigits(n);
	size_t			i;
	long long		nl;

	nl = (long long)n;
	i = digitcount;
	rslt = (char *)malloc(sizeof(char) * (i + 1));
	if (!rslt)
		return (0);
	if (nl < 0)
	{
		nl *= -1;
		rslt[0] = '-';
	}
	rslt[i] = '\0';
	if (nl == 0)
		rslt[0] = '0';
	while (nl != 0)
	{
		--i;
		rslt[i] = '0' + (nl % 10);
		nl /= 10;
	}
	return (rslt);
}
/*
int	main(void)
{
	int	i = -2147483648;

	printf("digit count of %d: %zu\n", i, ft_countdigits(i));
	printf("%s\n", ft_itoa(i));
	return (0);
}*/
