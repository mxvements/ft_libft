/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:45:19 by luciama2          #+#    #+#             */
/*   Updated: 2023/09/13 14:52:42 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ctype.h
 *
 * int	isprint(int c)
 * Tests for any printing character, ascii 32..126 both included
 * Returns 
 * 0 if false
 * non-zero (1) if true
 */

int	ft_isprint(int c)
{
	int	option;

	option = 0;
	if (c >= 32 && c <= 126)
		option = 1;
	return (option);
}
