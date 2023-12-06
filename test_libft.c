/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_libft.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmmielgo <lmmielgo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:05:46 by luciama2          #+#    #+#             */
/*   Updated: 2023/12/06 16:56:12 by lmmielgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


/*
char	*STR_EMPTY = "";
char	*STR_SPACE1 = "   ";
char	*STR_SPACE2 = "\t\n\v\f\r ";
char	*STR1 = "lorem\vipsum\rdolor\nsit\namet\n";
char	*STR2 = "1";
char	*STR3 = "lorem ictus!";

char	*ft_tester_int(int rslt1, int rslt2)
{
	return (rslt1 == rslt2 ? "OK" : "ERROR");
}

char	*ft_tester_sizet(size_t rslt1, size_t rslt2)
{
	return (rslt1 == rslt2 ? "OK" : "ERROR");
}

char	*ft_tester_void_ptr_sizet(void *rslt1, void *rslt2, size_t n)
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

char	*ft_tester_void_ptr(void *rslt1, void *rslt2)
{
	size_t	i;
	char	*testrslt = "OK";

	i = 0;
	while (((char*)rslt1)[i] != '\0')
	{
		if (((char*)rslt1)[i] != ((char *)rslt2)[i])
			testrslt = "ERROR";
		i++;
	}
	return (testrslt);
}

char	*ft_tester_str_ptr(char *rslt1, char *rslt2)
{
	size_t	i;
	char	*testrslt = "OK";

	i = 0;
	if (rslt1 == rslt2)
		return (testrslt);
	while (rslt1[i] != '\0')
	{
		if (rslt1[i] != rslt2[i])
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
	tester = ft_tester_void_ptr_sizet(ft_memset(rslt1, 'c', len), memset(rslt2, 'c', len), len);
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
	tester = ft_tester_void_ptr_sizet(rslt1, rslt2, len);
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
	tester = ft_tester_void_ptr_sizet(rslt1, rslt2, len);
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
	tester = ft_tester_void_ptr_sizet(rslt1, rslt2, len);
	printf("/01/:(overlaping)	%s\n", tester);
}

void	ft_strlcpy_test(void)
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
	
	tester = ft_tester_sizet(ft_strlcpy(rslt1, STR_SPACE1, len), strlcpy(rslt2, STR_SPACE1, len));
	printf("/01/:	%s ->	%s\n", STR_SPACE1, tester);
	
	tester = ft_tester_sizet(ft_strlcpy(rslt1, STR1, len), strlcpy(rslt2, STR1, len));
	printf("/01/:	%s ->	%s\n", STR1, tester);
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

	tester = ft_tester_sizet(ft_strlcat(rslt1, STR_SPACE1, len), strlcat(rslt2, STR_SPACE1, len));
	printf("/01/:	%s ->	%s\n", STR_SPACE1, tester);
	
	tester = ft_tester_sizet(ft_strlcat(rslt1, STR1, len), strlcat(rslt2, STR1, len));
	printf("/01/:	%s ->	%s\n", STR1, tester);
}

void 	ft_toupper_test(void)
{
	char	*tester;
	int		rslt1;
	int		rslt2;

	printf("\033[0;35m");
	printf("\nft_toupper - test\n");
	printf("\033[0m");

	rslt1 = ft_toupper(CHAR_MAX);
	rslt2 = toupper(CHAR_MAX);
	tester = ft_tester_int(rslt1, rslt2);
	printf("/01/:	%i ->	%s\n", CHAR_MAX, tester);

	rslt1 = ft_toupper(CHAR_MIN);
	rslt2 = toupper(CHAR_MIN);
	tester = ft_tester_int(rslt1, rslt2);
	printf("/02/:	%i ->	%s\n", CHAR_MIN, tester);

	rslt1 = ft_toupper(INT_MIN);
	rslt2 = toupper(INT_MIN);
	tester = ft_tester_int(rslt1, rslt2);
	printf("/03/:	%i ->	%s\n", INT_MIN, tester);

	rslt1 = ft_toupper(0);
	rslt2 = toupper(0);
	tester = ft_tester_int(rslt1, rslt2);
	printf("/03/:	%i ->	%s\n", 0, tester);
}

void	ft_tolower_test(void)
{
	char	*tester;
	int		rslt1;
	int		rslt2;

	printf("\033[0;35m");
	printf("\nft_tolower - test\n");
	printf("\033[0m");

	rslt1 = ft_tolower(CHAR_MAX);
	rslt2 = tolower(CHAR_MAX);
	tester = ft_tester_int(rslt1, rslt2);
	printf("/01/:	%i ->	%s\n", CHAR_MAX, tester);

	rslt1 = ft_tolower(CHAR_MIN);
	rslt2 = tolower(CHAR_MIN);
	tester = ft_tester_int(rslt1, rslt2);
	printf("/02/:	%i ->	%s\n", CHAR_MIN, tester);

	rslt1 = ft_tolower(INT_MIN);
	rslt2 = tolower(INT_MIN);
	tester = ft_tester_int(rslt1, rslt2);
	printf("/03/:	%i ->	%s\n", INT_MIN, tester);

	rslt1 = ft_tolower(0);
	rslt2 = tolower(0);
	tester = ft_tester_int(rslt1, rslt2);
	printf("/03/:	%i ->	%s\n", 0, tester);
}

void	ft_strchr_test(void)
{
	char	*tester;

	printf("\033[0;35m");
	printf("\nft_strchr - test\n");
	printf("\033[0m");

	tester = ft_tester_str_ptr(ft_strchr(STR1,'c'), strchr(STR1,'c'));
	printf("/01/:	%s, %c	->	%s\n", STR1,'c', tester);

	tester = ft_tester_str_ptr(ft_strchr(STR1,'i'), strchr(STR1,'i'));
	printf("/02/:	%s, %c	->	%s\n", STR1, 'i', tester);

	tester = ft_tester_str_ptr(ft_strchr(STR_EMPTY,'\0'), strchr(STR_EMPTY,'\0'));
	printf("/03/:	%s,%c	->	%s\n", STR_EMPTY, '\0', tester);
}

void	ft_strrchr_test(void)
{
	char	*tester;

	printf("\033[0;35m");
	printf("\nft_strrchr - test\n");
	printf("\033[0m");

	tester = ft_tester_str_ptr(ft_strrchr(STR1,'c'), strrchr(STR1,'c'));
	printf("/01/:	%s, %c	->	%s\n", STR1,'c', tester);

	tester = ft_tester_str_ptr(ft_strrchr(STR1,'i'), strrchr(STR1,'i'));
	printf("/02/:	%s, %c	->	%s\n", STR1, 'i', tester);

	tester = ft_tester_str_ptr(ft_strrchr(STR_EMPTY,'\0'), strrchr(STR_EMPTY,'\0'));
	printf("/03/:	%s,%c	->	%s\n", STR_EMPTY, '\0', tester);
}

void	ft_strncmp_test(void)
{
	char	*tester;

	printf("\033[0;35m");
	printf("\nft_strncmp - test\n");
	printf("\033[0m");

	tester = ft_tester_int(ft_strncmp(STR1, STR3, (size_t)5), strncmp(STR1, STR3, (size_t)5));
	printf("/01/:	%s\n", tester);

	tester = ft_tester_int(ft_strncmp(STR1, STR3, (size_t)8), strncmp(STR1, STR3, (size_t)8));
	printf("/02/:	%s\n", tester);

	tester = ft_tester_int(ft_strncmp(STR_EMPTY, STR3, (size_t)8), strncmp(STR_EMPTY, STR3, (size_t)8));
	printf("/03/:	%s\n", tester);
}

void	ft_memchr_test(void)
{
	char	*tester;

	printf("\033[0;35m");
	printf("\nft_memchr - test\n");
	printf("\033[0m");

	tester = ft_tester_void_ptr_sizet(ft_memchr(STR1, 'o', (size_t)5), memchr(STR1, 'o', (size_t)5), (size_t)5);
	printf("/01/:	%s\n", tester);
}

void	ft_memcmp_test(void)
{
	char	*tester;

	printf("\033[0;35m");
	printf("\nft_memcmp - test\n");
	printf("\033[0m");

	tester = ft_tester_int(ft_memcmp(STR1, STR3, 5), memcmp(STR1, STR3, 5));
	printf("/01/:\v%s\n", tester);

	tester = ft_tester_int(ft_memcmp(STR1, STR2, 5), memcmp(STR1, STR2, 5));
	printf("/02/:	%s\n", tester);

	tester = ft_tester_int(ft_memcmp(STR1, STR_EMPTY, 5), memcmp(STR1, STR_EMPTY, 5));
	printf("/03/:	%s\n", tester);
}

void	ft_strnstr_test(void)
{
	char	*tester;

	printf("\033[0;35m");
	printf("\nft_strnstr - test\n");
	printf("\033[0m");

	tester = ft_tester_str_ptr(ft_strnstr(STR3, STR1, (size_t)-5), strnstr(STR3, STR1, (size_t)-5));
	printf("/01/:\v%s\n", tester);

	tester = ft_tester_str_ptr(ft_strnstr(STR3, STR1, 10), strnstr(STR3, STR1, 10));
	printf("/02/:\v%s\n", tester);

	tester = ft_tester_str_ptr(ft_strnstr(STR1, STR_EMPTY, 5), strnstr(STR1, STR_EMPTY, 5));
	printf("/03/:\v%s\n", tester);
}

void	ft_atoi_test(void)
{
	char	*tester;
	printf("\033[0;35m");
	printf("\nft_atoi - test\n");
	printf("\033[0m");

	tester = ft_tester_int(ft_atoi("     +123456\v78"), atoi("     +123456\v78   "));
	printf("/01/:\v%s\n", tester);

	tester = ft_tester_int(ft_atoi(STR_EMPTY), atoi(STR_EMPTY));
	printf("/02/:\v%s\n", tester);

	tester = ft_tester_int(ft_atoi(STR1), atoi(STR1));
	printf("/03/:\v%s\n", tester);

	tester = ft_tester_int(ft_atoi("   +-123"), atoi("   +-123"));
	printf("/04/:\v%s\n", tester);
}

void	ft_calloc_test(void)
{
	char	*tester;
	size_t	size;
	printf("\033[0;35m");
	printf("\nft_calloc - test\n");
	printf("\033[0m");

	size =  10;
	tester = ft_tester_void_ptr_sizet(ft_calloc('c', size), calloc('c', size), size);
	printf("/01/:\v%s\n", tester);

	size =  10;
	tester = ft_tester_void_ptr_sizet(ft_calloc('\v', size), calloc('\v', size), size);
	printf("/02/:\v%s\n", tester);

	size =  10;
	tester = ft_tester_void_ptr_sizet(ft_calloc('1', size), calloc('1', size), size);
	printf("/03/:\v%s\n", tester);
}

void	ft_strdup_test(void)
{
	char	*tester;
	printf("\033[0;35m");
	printf("\nft_strdup - test\n");
	printf("\033[0m");

	tester = ft_tester_str_ptr(ft_strdup(STR_EMPTY), strdup(STR_EMPTY));
	printf("/01/:\v\'%s\'\v%s\n", STR_EMPTY, tester);

	tester = ft_tester_str_ptr(ft_strdup(STR_SPACE2), strdup(STR_SPACE2));
	printf("/02/:\v\'%s\'\v%s\n", STR_EMPTY,  tester);

	tester = ft_tester_str_ptr(ft_strdup(STR1), strdup(STR1));
	printf("/02/:\v\'%s\'\v%s\n", STR1, tester);
}

*/

void	ft_nodefree(void *content)
{
	free(content);
	content = NULL;
	return ;
}

void	ft_dllprint(t_dll **head)
{
	t_dll	*tmp = *head;
	int		*tmpnbr;
	while(tmp != NULL)
	{
		tmpnbr = (int *)(tmp->content);
		printf("mem: %p\n", tmp);
		printf("conent: %d\n", *tmpnbr);
		tmp = tmp->next;
	}
}

void	ft_dll_test(void)
{
	/*	t_dll	*ft_dllnew(void *content); --OK--
		void	ft_dlladd_front(t_dll **lst, t_dll *new); --OK--
		int		ft_dllsize(t_dll *lst); --OK--
		t_dll	*ft_dlllast(t_dll *lst); --OK--
		void	ft_dlladd_back(t_dll **lst, t_dll *new); --OK--
		void	ft_dlldelone(t_dll *lst, void (*del)(void *));
		void	ft_dllclear(t_dll **lst, void (*del)(void *));
		void	ft_dlliter(t_dll *lst, void (*f)(void *));
		t_dll	*ft_dllmap(t_dll *lst, void *(*f)(void *), void (*del)(void *));
	 */

	t_dll 	*dllnode1;
	t_dll 	*dllnode2;
	t_dll 	*dllnode3;
	t_dll	**head;
	int		nbr1 = 1;
	int		nbr2 = 2;
	int		nbr3 = 3;
	
	
	dllnode1 = ft_dllnew((void *)ft_strdup((char *)&nbr1));
	printf("node1: %p\n", dllnode1);
	dllnode2 = ft_dllnew((void *)ft_strdup((char *)&nbr2));
	printf("node2: %p\n", dllnode2);
	dllnode3 = ft_dllnew((void *)ft_strdup((char *)&nbr3));
	printf("node3: %p\n", dllnode3);
	head = &dllnode1;
	ft_dlladd_back(head, dllnode2);
	ft_dlladd_front(head, dllnode3); //updates head
	head = &dllnode3;

	//Print DLL
	ft_dllprint(head);
	
	//Print DLL's size
	int size;
	size = ft_dllsize(*head);
	printf("size: %d\n", size);
	
	//
	printf("node3 next: %p\n", dllnode3->next);
	printf("node3 next's c: %d\n", *(int *)(dllnode3->next->content));
	printf("node3 prev: %p\n", dllnode3->prev);
	
	printf("node1 next: %p\n", dllnode1->next);
	printf("node1 next's c: %d\n", *(int *)(dllnode1->next->content));
	printf("node1 prev: %p\n", dllnode1->prev);
	//DEL ONE (delete first)
	
	ft_dlldelone(dllnode1, &ft_nodefree);
	ft_dllprint(head);
	
}

int	main(void)
{	/*
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

	ft_dll_test();

	return (0);
}
