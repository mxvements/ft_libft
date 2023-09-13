/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:52:52 by luciama2          #+#    #+#             */
/*   Updated: 2023/09/13 20:12:10 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* string.h
 *
 * int	strlen(const char *s)
 * Computes the length of the string s.
 * Returns the number of characters that precede the terminating Nul character.
 */

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
