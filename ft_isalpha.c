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
