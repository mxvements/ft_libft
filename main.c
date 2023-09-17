/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:05:46 by luciama2          #+#    #+#             */
/*   Updated: 2023/09/13 17:27:39 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int	main(void)
{
	int	num1 = 'H';
	int	num2 = '.';
	int	num3 = 6;
	int	num4 = 'a';
	int	limitPos = 2147483647;
	int limitNeg = -2147483648;
	char *str1 = "Hello 42!";
	char *str2 = "";	

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
	printf("\nft_isalnum\n");
	printf("%d: %d - should be %d\n", num1, ft_isalnum(num1), isalnum(num1));
	printf("%d: %d - should be %d\n", num2, ft_isalnum(num2), isalnum(num2));
	printf("%d: %d - should be %d\n", num3, ft_isalnum(num3), isalnum(num3));
	printf("%d: %d - should be %d\n", num4, ft_isalnum(num4), isdigit(num4));
	printf("%d: %d - should be %d\n", limitPos, ft_isalnum(limitPos), isalnum(limitPos));
	printf("%d: %d - should be %d\n", limitNeg, ft_isalnum(limitNeg), isalnum(limitNeg));
	
	//ft_isascii
	printf("\nft_isasccii\n");
	printf("%d: %d - should be %d\n", num1, ft_isdigit(num3), isascii(num1));
	printf("%d: %d - should be %d\n", num2, ft_isascii(num2), isascii(num2));
	printf("%d: %d - should be %d\n", num3, ft_isascii(num3), isascii(num3));
	printf("%d: %d - should be %d\n", num4, ft_isascii(num2), isascii(num4));
	printf("%d: %d - should be %d\n", limitPos, ft_isascii(limitPos), isascii(limitPos));
	printf("%d: %d - should be %d\n", limitNeg, ft_isascii(limitNeg), isascii(limitNeg));
	
	//ft_isprint
	printf("\nft_isprint\n");
	printf("%d: %d - should be %d\n", num1, ft_isprint(num3), isprint(num1));
	printf("%d: %d - should be %d\n", num2, ft_isprint(num2), isprint(num2));
	printf("%d: %d - should be %d\n", num3, ft_isprint(num3), isascii(num3));
	printf("%d: %d - should be %d\n", num4, ft_isprint(num2), isprint(num4));
	printf("%d: %d - should be %d\n", limitPos, ft_isprint(limitPos), isprint(limitPos));
	printf("%d: %d - should be %d\n", limitNeg, ft_isprint(limitNeg), isprint(limitNeg));
	
	//ft_strlen
	printf("\nft_strlen\n");
	printf("%s: %d - should be %lu\n", str1, ft_strlen(str1), strlen(str1));
	printf("%s: %d - should be %lu\n", str2, ft_strlen(str2), strlen(str2));

	//ft_toupper
	printf("\nft_toupper\n");
	printf("%d: %d - should be %d\n", num1, ft_toupper(num3), toupper(num1));
	printf("%d: %d - should be %d\n", num2, ft_toupper(num2), toupper(num2));
	printf("%d: %d - should be %d\n", num3, ft_toupper(num3), toupper(num3));
	printf("%d: %d - should be %d\n", num4, ft_toupper(num2), toupper(num4));
	
	//ft_tolower
	printf("\nft_tolower\n");
	printf("%d: %d - should be %d\n", num1, ft_tolower(num3), tolower(num1));
	printf("%d: %d - should be %d\n", num2, ft_tolower(num2), tolower(num2));
	printf("%d: %d - should be %d\n", num3, ft_tolower(num3), tolower(num3));
	printf("%d: %d - should be %d\n", num4, ft_tolower(num2), tolower(num4));
	
	return (0);
}
