/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:05:46 by luciama2          #+#    #+#             */
/*   Updated: 2023/09/13 12:33:40 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	num1 = 'H';
	int	num2 = '.';
	int	num3 = 6;
	int	num4 = 'a';
	int	limitPos = 2147483647;
	int limitNeg = -2147483648;

	//ft_isupper
	printf("\nft_isupper - extra function for ft_isalpha\n");
	printf("%d: %d - should be %d\n", num1, ft_isupper(num1), isupper(num1));
	printf("%d: %d - should be %d\n", num4, ft_isupper(num4), isupper(num4));
	
	//ft_islower
	printf("\nft_islower - extra function for ft_islower\n");
	printf("%d: %d - should be %d\n", num1, ft_islower(num1), islower(num1));
	printf("%d: %d - should be %d\n", num4, ft_islower(num2), islower(num2));
	
	//ft_isalpha
	printf("\nft_isalpha\n");
	printf("%d: %d - should be %d\n", num1, ft_isalpha(num1), isalpha(num1));
	printf("%d: %d - should be %d\n", num2, ft_isalpha(num2), isalpha(num2));
	printf("%d: %d - should be %d\n", limitPos, ft_isalpha(limitPos), isalpha(limitPos));
	printf("%d: %d - should be %d\n", limitNeg, ft_isalpha(limitNeg), isalpha(limitNeg));
	
	//ft_isdigit
	printf("\nft_isdigit\n");
	printf("%d: %d - should be %d\n", num3, ft_isdigit(num3), isdigit(num3));
	printf("%d: %d - should be %d\n", num2, ft_isdigit(num2), isdigit(num2));
	printf("%d: %d - should be %d\n", limitPos, ft_isdigit(limitPos), isdigit(limitPos));
	printf("%d: %d - should be %d\n", limitNeg, ft_isdigit(limitNeg), isdigit(limitNeg));
	
	//ft_isalnum
	return (0);
}
