/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 20:30:02 by luciama2          #+#    #+#             */
/*   Updated: 2023/09/13 12:23:20 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ctype.hh
 *
 * int	islower(int c)
 * TEST fot ascii 97 to 122 (decimal), both included
 * RETURN
 * 0 if false
 * non-zero (1) if true
 */

static int	ft_islower(int c)
{
	int	option;

	option = 0;
	if (c >= 97 && c <= 122)
		option = 1;
	return (option);
}

/*
 * ctype.h
 * int	isupper(int c)
 * Test for ascii 65 to 90, both included (decimal)
 * Return
 * 	0 if false
 * 	non-zerro (1) if true
 */

static int	ft_isupper(int c)
{
	int	option;

	option = 0;
	if (c >= 65 && c <= 90)
		option = 1;
	return (option);
}

/*
 * ctype.h
 *
 * int	isalpha(int c)
 *
 * Test for any character for whis isupper or islower is true
 * Return
 * 	0 if false
 * 	non-zero (1) if true
 */

int	ft_isalpha(int c)
{
	return (ft_isupper(c) || ft_islower(c));
}
