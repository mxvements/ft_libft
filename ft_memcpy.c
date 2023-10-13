/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 16:36:32 by luciama2          #+#    #+#             */
/*   Updated: 2023/10/13 22:11:02 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* string.h
 * void	*memcpy(void *dst, void *src, size_t n);
 *
 * copy n bytes from src to dst
 * If dst and src overlap, behaviour is undefined. 
 * */

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*srccpy;
	char	*dstcpy;

	i = 0;
	srccpy = (char *)src;
	dstcpy = (char *)dst;
	if (dstcpy == 0 && srccpy == 0)
		return ((void *)dstcpy);
	while (i < n)
	{
		dstcpy[i] = srccpy[i];
		i++;
	}
	return ((void *)dstcpy);
}
/*
int	main(void)
{
	char	s1[5] = {'s', 'a', '\0', 'c', 'h'};
	char	s2[5];
	char	s3[5];
	int		i;
	
	ft_strlcpy(s2, s1, 5);
	ft_memcpy(s3, s1, 5);

	i = 0;
	printf("\nprueba con ft_strlcpy\n");
	while (i < 5)
	{
		printf("%c",s2[i]);
		i++;	
	}
	i = 0;
	printf("\nprueba con ft_memcpy\n");
	while (i < 5)
	{
		printf("%c",s3[i]);
		i++;	
	}
}*/
