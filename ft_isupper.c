/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:41:24 by luciama2          #+#    #+#             */
/*   Updated: 2023/09/13 12:35:03 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * ctype.h
 * int	isupper(int c)
 * Test for ascii 65 to 90, both included (decimal)
 * Return
 * 	0 if false
 * 	non-zerro (1) if true
 */

int	ft_isupper(int c)
{
	int	option;

	option = 0;
	if (c >= 65 && c <= 90)
		option = 1;
	return (option);
}
