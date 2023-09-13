/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:37:47 by luciama2          #+#    #+#             */
/*   Updated: 2023/09/13 16:34:52 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ctype.h
 * int	isascii(int c)
 *
 * test for an ascii character
 * ascii decimal 0..127 included
 */

int	ft_isascii(int c)
{
	int	option;

	option = 0;
	if (c >= 0 && c <= 127)
		option = 1;
	return (option);
}
