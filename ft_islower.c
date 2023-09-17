/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:51:28 by luciama2          #+#    #+#             */
/*   Updated: 2023/09/13 12:14:49 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * ctype.hh
 *
 * int	islower(int c)
 * TEST fot ascii 97 to 122 (decimal), both included
 * RETURN
 * 0 if false
 * non-zero (1) if true
 */

int	ft_islower(int c)
{
	int	option;

	option = 0;
	if (c >= 97 && c <= 122)
		option = 1;
	return (option);
}
