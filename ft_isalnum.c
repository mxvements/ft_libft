/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:51:40 by luciama2          #+#    #+#             */
/*   Updated: 2023/09/13 14:44:28 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * int	isalnum(int c);
 * Tests for any character or which isalpha or isdigit is true.
 * Return
 * 		zero if the characterr tests false
 * 		non-zero if the character tests true
 */

int	ft_isalpha(int c);
int	ft_isdigit(int c);

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
