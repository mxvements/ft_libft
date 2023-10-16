/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_libft.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:05:46 by luciama2          #+#    #+#             */
/*   Updated: 2023/10/16 16:08:08 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*STR_EMPTY = "";
char	*STR_SPACE1 = "   ";
char	*STR_SPACE2 = "\t\n\v\f\r ";
char	*STR1 = "lorem\tipsum\tdolor\nsit\namet\n";
char	*STR2 = "1";
char	*STR3 = "Hello !";

char	*ft_tester_int(int rslt1, int rslt2)
{
	return (rslt1 == rslt2 ? "OK" : "ERROR");
}

char	*ft_tester_sizet(size_t rslt1, size_t rslt2)
{
	return (rslt1 == rslt2 ? "OK" : "ERROR");
}

char	*ft_tester_void_ptr(void *rslt1, void *rslt2, size_t n)
{
	size_t	i;
	char	*testrslt = "OK";

	i = 0;
	while (i < n)
	{
		if (((char*)rslt1)[i] != ((char *)rslt2)[i])
			testrslt = "ERROR";
		i++;
	}
	return (testrslt);
}

void	ft_isalnum_test(void)
{
	char	*tester;
	int		rslt1;
	int		rslt2;

	printf("\033[0;35m");
	printf("\nft_isalnum - test\n");
	printf("\033[0m");

	rslt1 = ft_isalnum(CHAR_MAX);
	rslt2 = isalnum(CHAR_MAX);
	tester = ft_tester_int(rslt1, rslt2);
	printf("/01/:	%i ->	%s\n", CHAR_MAX, tester);

	rslt1 = ft_isalnum(CHAR_MIN);
	rslt2 = isalnum(CHAR_MIN);
	tester = ft_tester_int(rslt1, rslt2);
	printf("/02/:	%i ->	%s\n", CHAR_MIN, tester);

	rslt1 = ft_isalnum(INT_MIN);
	rslt2 = isalnum(INT_MIN);
	tester = ft_tester_int(rslt1, rslt2);
	printf("/03/:	%i ->	%s\n", INT_MIN, tester);

	rslt1 = ft_isalnum(0);
	rslt2 = isalnum(0);
	tester = ft_tester_int(rslt1, rslt2);
	printf("/03/:	%i ->	%s\n", 0, tester);
}

void	ft_isalpha_test(void)
{
	char	*tester;
	int		rslt1;
	int		rslt2;

	printf("\033[0;35m");
	printf("\nft_isalpha - test\n");
	printf("\033[0m");

	rslt1 = ft_isalpha(CHAR_MAX);
	rslt2 = isalpha(CHAR_MAX);
	tester = ft_tester_int(rslt1, rslt2);
	printf("/01/:	%i ->	%s\n", CHAR_MAX, tester);

	rslt1 = ft_isalpha(CHAR_MIN);
	rslt2 = isalpha(CHAR_MIN);
	tester = ft_tester_int(rslt1, rslt2);
	printf("/02/:	%i ->	%s\n", CHAR_MIN, tester);

	rslt1 = ft_isalpha(INT_MIN);
	rslt2 = isalpha(INT_MIN);
	tester = ft_tester_int(rslt1, rslt2);
	printf("/03/:	%i ->	%s\n", INT_MIN, tester);

	rslt1 = ft_isalpha(0);
	rslt2 = isalpha(0);
	tester = ft_tester_int(rslt1, rslt2);
	printf("/03/:	%i ->	%s\n", 0, tester);
}

void	ft_isascii_test(void)
{
	char	*tester;
	int		rslt1;
	int		rslt2;

	printf("\033[0;35m");
	printf("\nft_isalpha - test\n");
	printf("\033[0m");

	rslt1 = ft_isascii(CHAR_MAX);
	rslt2 = isascii(CHAR_MAX);
	tester = ft_tester_int(rslt1, rslt2);
	printf("/01/:	%i ->	%s\n", CHAR_MAX, tester);

	rslt1 = ft_isascii(CHAR_MIN);
	rslt2 = isascii(CHAR_MIN);
	tester = ft_tester_int(rslt1, rslt2);
	printf("/02/:	%i ->	%s\n", CHAR_MIN, tester);

	rslt1 = ft_isascii(INT_MIN);
	rslt2 = isascii(INT_MIN);
	tester = ft_tester_int(rslt1, rslt2);
	printf("/03/:	%i ->	%s\n", INT_MIN, tester);

	rslt1 = ft_isascii(0);
	rslt2 = isascii(0);
	tester = ft_tester_int(rslt1, rslt2);
	printf("/03/:	%i ->	%s\n", 0, tester);
}

void	ft_isdigit_test(void)
{
	char	*tester;
	int		rslt1;
	int		rslt2;

	printf("\033[0;35m");
	printf("\nft_isalpha - test\n");
	printf("\033[0m");

	rslt1 = ft_isdigit(CHAR_MAX);
	rslt2 = isdigit(CHAR_MAX);
	tester = ft_tester_int(rslt1, rslt2);
	printf("/01/:	%i ->	%s\n", CHAR_MAX, tester);

	rslt1 = ft_isdigit(CHAR_MIN);
	rslt2 = isdigit(CHAR_MIN);
	tester = ft_tester_int(rslt1, rslt2);
	printf("/02/:	%i ->	%s\n", CHAR_MIN, tester);

	rslt1 = ft_isdigit(INT_MIN);
	rslt2 = isdigit(INT_MIN);
	tester = ft_tester_int(rslt1, rslt2);
	printf("/03/:	%i ->	%s\n", INT_MIN, tester);

	rslt1 = ft_isdigit(0);
	rslt2 = isdigit(0);
	tester = ft_tester_int(rslt1, rslt2);
	printf("/03/:	%i ->	%s\n", 0, tester);
}

void	ft_isprint_test(void)
{
	char	*tester;
	int		rslt1;
	int		rslt2;

	printf("\033[0;35m");
	printf("\nft_isalpha - test\n");
	printf("\033[0m");

	rslt1 = ft_isprint(CHAR_MAX);
	rslt2 = isprint(CHAR_MAX);
	tester = ft_tester_int(rslt1, rslt2);
	printf("/01/:	%i ->	%s\n", CHAR_MAX, tester);

	rslt1 = ft_isprint(CHAR_MIN);
	rslt2 = isprint(CHAR_MIN);
	tester = ft_tester_int(rslt1, rslt2);
	printf("/02/:	%i ->	%s\n", CHAR_MIN, tester);

	rslt1 = ft_isprint(INT_MIN);
	rslt2 = isprint(INT_MIN);
	tester = ft_tester_int(rslt1, rslt2);
	printf("/03/:	%i ->	%s\n", INT_MIN, tester);

	rslt1 = ft_isprint(0);
	rslt2 = isprint(0);
	tester = ft_tester_int(rslt1, rslt2);
	printf("/03/:	%i ->	%s\n", 0, tester);
}

void	ft_strlen_test(void)
{
	char	*tester;
	size_t	rslt1;
	size_t	rslt2;

	printf("\033[0;35m");
	printf("\nft_strlen - test\n");
	printf("\033[0m");

	rslt1 = ft_strlen(STR_EMPTY);
	rslt2 = strlen(STR_EMPTY);
	tester = ft_tester_sizet(rslt1, rslt2);
	printf("/01/:	%s ->	%s\n", STR_EMPTY, tester);

	rslt1 = ft_strlen(STR_SPACE1);
	rslt2 = strlen(STR_SPACE1);
	tester = ft_tester_sizet(rslt1, rslt2);
	printf("/02/:	%s ->	%s\n", STR_SPACE1, tester);

	rslt1 = ft_strlen(STR_SPACE2);
	rslt2 = strlen(STR_SPACE2);
	tester = ft_tester_sizet(rslt1, rslt2);
	printf("/03/:	%s ->	%s\n", STR_SPACE2, tester);

	rslt1 = ft_strlen(STR1);
	rslt2 = strlen(STR1);
	tester = ft_tester_sizet(rslt1, rslt2);
	printf("/03/:	%s ->	%s\n", STR1, tester);
}

void	ft_memset_test(void)
{
	char	*tester;
	size_t	len;
	char	rslt1[256];
	char	rslt2[256];

	printf("\033[0;35m");
	printf("\nft_memset - test\n");
	printf("\033[0m");

	len = 10;
	tester = ft_tester_void_ptr(ft_memset(rslt1, 'c', len), memset(rslt2, 'c', len), len);
	printf("/01/:	%s\n", tester);
}

void	ft_bzero_test(void)
{
	char	*tester;
	char	rslt1[256];
	char	rslt2[256];
	size_t	len;

	printf("\033[0;35m");
	printf("\nft_bzero - test\n");
	printf("\033[0m");

	len = 10;
	ft_bzero(rslt1, len);
	bzero(rslt2, len);
	tester = ft_tester_void_ptr(rslt1, rslt2, len);
	printf("/01/:	%s\n", tester);
}

void	ft_memcpy_test(void)
{
	char	*tester;
	char	*src = "Hola !";
	char	rslt1[256];
	char	rslt2[256];
	size_t	len = 4;

	printf("\033[0;35m");
	printf("\nft_memcpy - test\n");
	printf("\033[0m");

	ft_memcpy(rslt1, src, len);
	memcpy(rslt2, src, len);
	tester = ft_tester_void_ptr(rslt1, rslt2, len);
	printf("/01/:(no overlaping)	%s\n", tester);
}

void	ft_memmove_test(void)
{
	char	*tester;
	char	src[] = "hola !";
	char	*rslt1 = src + 1;
	char 	*rslt2 = src + 1;
	size_t	len = 4;

	printf("\033[0;35m");
	printf("\nft_memmove - test\n");
	printf("\033[0m");

	ft_memmove(rslt1, src, len);
	memmove(rslt2, src, len);
	tester = ft_tester_void_ptr(rslt1, rslt2, len);
	printf("/01/:(overlaping)	%s\n", tester);
}

void ft_strlcpy_test(void)
{
	char	*tester;
	char	rslt1[256];
	char	rslt2[256];
	size_t	len = 4;

	printf("\033[0;35m");
	printf("\nft_strlcpy - test\n");
	printf("\033[0m");

	tester = ft_tester_sizet(ft_strlcpy(rslt1, STR_EMPTY, len), strlcpy(rslt2, STR_EMPTY, len));
	printf("/01/:	%s ->	%s\n", STR_EMPTY, tester);
}

void	ft_strlcat_test(void)
{
	char	*tester;
	char	rslt1[256];
	char	rslt2[256];
	size_t	len = 4;

	printf("\033[0;35m");
	printf("\nft_strlcpy - test\n");
	printf("\033[0m");

	tester = ft_tester_sizet(ft_strlcat(rslt1, STR_EMPTY, len), strlcat(rslt2, STR_EMPTY, len));
	printf("/01/:	%s ->	%s\n", STR_EMPTY, tester);
}

int	main(void)
{	
	ft_isalnum_test();
	ft_isalpha_test();
	ft_isascii_test();
	ft_isdigit_test();
	ft_isprint_test();
	ft_strlen_test();
	ft_memset_test();
	ft_bzero_test();
	ft_memcpy_test();
	ft_memmove_test();
	ft_strlcpy_test();
	ft_strlcat_test();

	/*
	ft_toupper_test();
	ft_tolower_test();
	ft_strchr_test();
	ft_strrchr_test();
	ft_strncmp_test();
	ft_memchr_test();
	ft_memcmp_test();
	ft_strnstr_test();
	ft_atoi_test();
	ft_calloc_test();
	ft_strdup_test();
	*/
	return (0);
}