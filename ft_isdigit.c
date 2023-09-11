/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 19:12:44 by luciama2          #+#    #+#             */
/*   Updated: 2023/09/11 19:26:03 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_isdigit(char *str)
{
	int i;
	int option;

	while (str[i] != '\0')
	{
		if (str[i] >= 48 && str[i] <= 57)
			option = 1;
		else
			option = 0;
		i++;
	}
	return option;

}

int main(void)
{
	return (0);
}
