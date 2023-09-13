/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 19:53:34 by luciama2          #+#    #+#             */
/*   Updated: 2023/09/13 20:38:33 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* string.h
 *
 * char *strchr(const char *s, int c)
 * locate character in string, the last occurrence of c
 *
 * '\0' is considered to be part of the string
 * returns a pointer to the located character, or NULL if the character does
 * not appear
 */

char	*ft_strrchr(const char *s, int c)
{
	char			*cpy;
	const size_t	srcsize = ft_strlen(s);
	unsigned int	i;

	i = srcsize - 1;
	cpy = s + i;
	while (*cpy != c && i-- >= 0 )
		cpy--;
	if (c = '\0' || i = 0)
		cpy = src[srcsize + 1];
	return (cpy);
}
