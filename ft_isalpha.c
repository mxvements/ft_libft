/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:59:27 by luciama2          #+#    #+#             */
/*   Updated: 2023/09/11 18:41:27 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_isalpha(char *str)
{
	int i;
	int option;

	i = 0;
	while (str[i]  != '\0')
	{
		if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
			option = 1;
		else
			option = 0;
		i++;
	}
	return option;	
}

int main(void)
{
	char *str1 = "Hello";
	char *str2 = "He.";
	char c;

	c = '0' + ft_isalpha(str1);
	write(1, &c, 1);
	write(1, "\n", 1);
	c = '0' + ft_isalpha(str2);
	write(1, &c, 1);

	return (0);
}
