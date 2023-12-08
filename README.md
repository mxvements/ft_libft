<div align="center">
    <img src="https://img.shields.io/badge/status-finished-success?color=00ABAD&style=flat-square" />
    <img src="https://img.shields.io/badge/started-11%20%2F%2009%20%2F%202023-success?color=00ABAD&style=flat-square" />
    <img src="https://img.shields.io/badge/score-125%20%2F%20100-success?color=00ABAD&style=flat-square" />
    <img src="https://img.shields.io/github/languages/top/mxvements/ft_libft?color=00ABAD&style=flat-square" />
    <img src="https://img.shields.io/github/last-commit/mxvements/ft_libft?color=00ABAD&style=flat-square" />
    <br>
    <a href='https://www.linkedin.com/in/luciami' target="_blank"><img alt='Linkedin' src='https://img.shields.io/badge/LinkedIn-100000?style=flat-square&logo=Linkedin&logoColor=white&labelColor=1323233&color=323233'/></a>
    <a href='https://profile.intra.42.fr/users/luciama2' target="_blank"><img alt='42' src='https://img.shields.io/badge/Madrid-100000?style=flat-square&logo=42&logoColor=white&labelColor=323233&color=323233'/></a>
    <br>
</div>

# ft_libft

The first project at 42, libft, involves learning how the standard functions of C programming work by writing them from scratch and creating a personal library. This project is vital as the library will be used in future assignments at 42.

| **Program name** | libft.a |
| ---------------- | ------- |
| **Turn in files** | Makefile, libft.h, ft_*.c |
| **Makefile** | NAME, all, clean, fclean, re |
| **External functs** | Detailed below (libc, add, bonus) |
| **Libft authorized** | n/a |
| **Description** | Write your own library: a collection of functions that will be a useful tool for your cursus. |

+ Mandatory part
  + Part 1: **libc functions**, recreate functions on `ctyphe.h`,  `string.h` & `strings.h`
    + [x] `ft_isalpha`
    + [x] `ft_isdigit`
    + [x] `ft_isalnum`
    + [x] `ft_isascii`
    + [x] `ft_toupper`
    + [x] `ft_tolower`
    + [x] `ft_strlen`
    + [x] `ft_strlcpy`
    + [x] `ft_strlcat`
    + [x] `ft_strchr`
    + [x] `ft_strrchr`
    + [x] `ft_strncmp`
    + [x] `ft_strnstr`
    + [x] `ft_calloc`
    + [x] `ft_memset`
    + [x] `ft_bzero`
    + [x] `ft_memcpy`
    + [x] `ft_memmove`
    + [x] `ft_memchr`
    + [x] `ft_memcmp`
    + [x] `ft_strdup`
    + [x] `ft_atoi`
  + Part 2: **additional functions**
    + [x] `ft_substr`
    + [x] `ft_strjoin`
    + [x] `ft_strtrim`
    + [x] `ft_split`
    + [x] `ft_strmapi`
    + [x] `ft_itoa`
    + [x] `ft_putchar_fd`
    + [x] `ft_putstr_fd`
    + [x] `ft_putendl_fd`
    + [x] `ft_putnbr_fd`
+ **Bonus part**, linked lists
  + [x] `ft_lstnew`
  + [x] `ft_lstadd_front`
  + [x] `ft_lstsize`
  + [x] `ft_lstlast`
  + [x] `ft_lstadd_back`
  + [x] `ft_lstdelone`
  + [x] `ft_lstclear`
  + [x] `ft_lstiter`
  + [x] `ft_lstmap`
+ Other functions added to the library (included after validating the project on the intra)
  + [x] `ft_isupper`
  + [x] `ft_islower`
  + [x] `ft_isspace`
  + [ ] `ft_countwords` - used static in split
  + [ ] `ft_putnbr_base` - for ft_printf
  + [ ] `ft_itoa_base` - for ft_printf
  + [ ] `ft_atoi_base`
  + [x] `ft_intdup` - copying int in heap
  + [x] `ft_atoif` - includes a flag to know when there is int overflow
  + DLL functions for 'push_swap'
    + [x] ft_dlladd_back.c
    + [x] ft_dlladd_fron.c
    + [x] ft_dllclear.c
    + [x] ft_dlldelone.c
    + [x] ft_dlliter.c
    + [x] ft_dlllast.c
    + [x] ft_dllmap.c
    + [x] ft_dllnew.c
    + [x] ft_dllsize.c

## How to use

### Compilation

1 - Clone de repository

```
git clone git@github.com:mxvements/ft_libft.git
```

2 - Enter the project folder and run `make`, makefile rules

	`make` - compile libft mandatory files
	`make bonus` - compile libft bonus files
	`make all` - compile all (mandatory + bonus) files
	`make clean` - delete all *.o files
	`make fclean` - delete all *.o & *.a (executable) files
	`make re` - use fclean + all, recompile libft
	`make test` - added rule, compile test_libft.c file (main w/ tester functs on libc)
	`make tclean` - added rule, delete all *.o & clean *.out file from test

3 - To include it in your code, include the header

```
#include 'libft.h"
```
## Mandatory part

### Check and manipulate characters

| **Name** |  Library | Prototype | Short description | Dependencies |
| -------- | -------- | --------- | ----------------- | ------------ |
| **ft_isalpha** | ctype.h | int ft_isalpha(int c) | Test for any character for whis isupper or islower is true. Returns: (0) if false, (non-zero) if true | ft_isupper*, ft_islower* |
| **ft_isdigit**  | ctype.h | int ft_isdigit(int c) | Test for decimal digit character (ascii 48..57). Return: (0) if false, (non-zero) if true |   |
| **ft_isalnum**  | ctype.h | int ft_isalnum(int c) | Tests for any character or which isalpha or isdigit is true. Return: (0) if false, (non-zero) if true. | ft_isdigit, ft_isalpha |
| **ft_isascii**  | ctype.h | int ft_isascii(int c) | Test for ascii character (dec 0..127 included). Return: (0) if false, (non-zero) if true |   |
| **ft_isprint**  | ctype.h | int ft_isprint(int c) | Tets for any printing character (ascii dec 32..136). Return: (0) if false, (nonzero) if true |   |
| **ft_toupper**  | ctype.h | int ft_toupper(int c) | Converts lower-case to the corresponding upper-case. Return: the corresponding upper-case char, otherwise the argument is returned unchanged (was already uppercase or not a char) | ft_islower* |
| **ft_tolower**  |  ctype.h | int ft_tolower(int c) | Converts upper-case to the corresponding lower-case. Return: the corresponding lower-case char, otherwise the argument is returned unchanged (was already lower-case or not a char)  | ft_isupper* |

### Manipulate strings

| **Name** |  Library | Prototype | Short description | Dependencies |
| -------- | -------- | --------- | ----------------- | ------------ |
| **ft_strlen** | string.h | size_t strlen(const char *s) | compute the length of s, number of characters that preecede NULL character | - |
| **ft_strlcpy**  | string.h | size_t ft_strlcpy(char *dst, const char *src, size_t dstsize) | size-bounded string copying, copies up to (len -1) size != 0 from src to dst, NULL terminating the result if | ft_strlen(src) |
| **ft_strlcat**  | string.h | size_t ft_strlcat(char *dst, const char *src, size_t size) | size-bounded string copying and concatenation, appends string src to the end of dst, it will append at most size - strlen(dst) -1 | - |
| **ft_strchr**  | string.h | char *ft_strchr(const char *s, int c) | locates the char (ascii representation) 'c' in 's' the terminating null is considered as part of the string | - |
| **ft_strrchr**  | string.h | char *strrchr(const char *s, int c) | locate character in string, the last occurrence of c | - |
| **ft_strncmp**  | string.h | int ft_strncmp(const char *s1, const char *s2, size_t n) | compare strings, not more than n characters compare strings, not more than n characters, the comparison is done using unsigned characters | - |
| **ft_strnstr**  | string.h | char *ft_strnstr(const char *haystack, const char *needle, size_t len) | locates the first occurrence of the null-terminate string needle' in the string 'haystack', where not more than 'len' characters are searched. | - |
| **ft_substr**  | - | char *ft_substr(char const *s, unsigned int start, size_t len) |  allocates (with malloc(3)) and returns a substring from 's' the substring begins at start and is max of size len | malloc |
| **ft_strjoin**  |  - | char *ft_strjoin(char const *s1, char const *s2) | allocates (with malloc(3)) and returns a new sring, which is the result of the concatenation of s1 and s2 | malloc |
| **ft_strjoin**  |  - | char *ft_strjoin(char const *s1, char const *s2) | allocates (with malloc(3)) and returns a new sring, which is the result of the concatenation of s1 and s2 | malloc |
| **ft_strtrim**  |  - | char *ft_strtrim(char const *s1, char const *set) | allocates (with malloc(3)) and returns a copy of s1 with the characters specified in 'set' removed from the beginning and the end of the string | malloc, ft_strlen, ft_substr, ft_getfirstindex, ft_getlastindex, ft_strchr |
| **ft_split**  |  - | char **ft_split(char const *s, char c) | allocates (with malloc(3)) and returns an array of strings obtained by splitting 's' using the character 'c' as a delimiter. The array must end with a NULL pointer. | malloc, ft_strtrimwrapper, t_substr, ft_countwords |
| **ft_strmapi**  |  - | char *ft_strmapi(char const *s, char (*f)(unsigned int, char)) | applies 'f' to each character of 's', and passing its index as first argument to create a new string | malloc (w/ malloc) resulting from successive applications of 'f' |
| **ft_striteri**  |  - | ft_striteri(char *s, void (*f)(unsigned int, char*)) | applies 'f' on each character of the string passed as argument, passing its index as first argument. | - |

### Manipulate numbers

| **Name** |  Library | Prototype | Short description | Dependencies |
| -------- | -------- | --------- | ----------------- | ------------ |
| **ft_atoi** | stdlib.h | int atoi(const char *str) | convert initial portion of str to int representation | ft_isspace, ft_isdigit |
| **ft_itoa**  | - | char *ft_itoa(int n) | allocates (with malloc(3)) and returns a string representing the int received as an argument. Negative numbers must be handled. | malloc, ft_countdigits |

### Manipulate memory

| **Name** |  Library | Prototype | Short description | Dependencies |
| -------- | -------- | --------- | ----------------- | ------------ |
| **ft_memset** | string.h | void *memset(void *b, int c, size_t len) | writes 'len' bytes of value 'c '(converted to unsigned char) to the str 'b'. | - |
| **ft_bzero** | strings.h | void (void *s, size_t n) | erases the data int the 'n' bytes of the memory starting | ft_memset at the location pointed by 's', by writing '0' in the area |
| **ft_memcpy**  | string.h | void *memcpy(void *dst, void *src, size_t n) | copy 'n' bytes from 'src' to 'dst' f 'dst' and 'src' overlap, behaviour is undefined | - |
| **ft_memmove**  | string.h | void *memmove(void *dst, const void *src, size_t n) | copy 'n' bytes from src to dst if 'src' and 'dst' overlap, the copy is always done in a non-destructive manner (memory safe) | ft_memcpy |
| **ft_memchr**  | string.h | void *ft_memchr(const void *s, int c, size_t n) | scans 'n' bytes form 's' to search for the 1st instance of 'c', both c and s are interpreted as unsigned char | - |
| **ft_memcmp**  | string.h | int ft_memcmp(const void *s1, const void *s2, size_t n) | compare byte string 's1' against 's2', both assumed 'n' bytes long | - |
| **ft_calloc**  | stdlib.h | void *calloc(size_t count, size_t size) | memory allocation with enough space for count objects that are size bytes of memory each and returns a pointerto the allocated memory filled with bytes of i value (0) | malloc |
| **ft_strdup**  | string.h | char *ft_strdup(const char *s1) | saves a cpy of the str 's1', allocating anough memory, doing the copy and returning the ptr to it. allocates at most 'n' char from 's1' always terminating the copied str. | malloc |

### Write to a file descriptor

| **Name** |  Library | Prototype | Short description | Dependencies |
| -------- | -------- | --------- | ----------------- | ------------ |
| **ft_putchar_fd** | - | void ft_putchar_fd(hcar c, int fd) | outputs the char 'c' to the given file descriptor | write |
| **ft_putstr_fd** | - | void ft_putstr_fd(char *s, int fd) | outputs the string 's' to the given file descriptor | write |
| **ft_putendl_fd**  | - | void ft_putendl_fd(char *s, int fd) | ouputs the string 's' to the given file descriptor followed by a new line | write |
| **ft_putnbr_fd**  | - | void ft_putnbr_fd(int n, int fd); | outputs the integer 'n' to the given file descriptor | write |

## Bonus

### Manipulate linked lists

| **Name** |  Library | Prototype | Short description | Dependencies |
| -------- | -------- | --------- | ----------------- | ------------ |
| **ft_lstnew** | - | t_list *ft_lstnew(void *content) | allocates (with malloc(3)) and returns a new node. the member variable 'content' is inizialized with the value of the param 'content', the variable 'next' is initilized to NULL | malloc |
| **ft_lstadd_front** | - | void ft_lstadd_front(t_list **lst, t_list *new) | ads the node 'new' at the beginning of the list | - |
| **ft_lstsize**  | - | int	ft_lstsize(t_lst *lst) | counts the number of nodes in a list | - |
| **ft_lstlast**  | - | t_list ft_llstlast(t_list *lst) | return the last node of the list | - |
| **ft_lstadd_back**  | - | void ft-lstadd_back(t_list **lst, t_list *new) | adds the node 'new' at the end of the list | - |
| **ft_lstdelone**  | - | void ft_lstdelone(t_list *lst, void (*del)(void*)) | takes as parameter the node and frees the memory of the node's content using the function 'del' given as a param and free the node, the memory 'next' must not be freed. | free |
| **ft_lstclear**  | - | void ft_lstclear(t_list **lst, void (*del)(void *)) | deletes and frees the given node and every successor of that node, using the function 'del' and free(3) | free |
| **ft_lstiter**  | - | void ft_lstiter(t_list *lst, void (*f)(void *)) | iterates the list 'lst' and applies the function 'f' on the content of each node. | - |
| **ft_lstmap**  | - | t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *)) | iterates the list 'lst' and applies the funcion 'f' on the content of each node. creates a new list resulting of the successive applications of the function 'f' the 'del' function is used to delete the content of a node if needed | malloc, free, ft_lstnew, ft_lstclear, ft_lstadd_back |

# Other

## Norminete
At 42 School, it is expected that almost every project is written in accordance with the Norm, which is the coding standard of the school.

<a href="https://github.com/42School/norminette">
<a>Norminette's repository</a>

```
- No for, do...while, switch, case, goto, ternary operators and variable-length arrays are allowed
- Each function must be a maximum of 25 lines, not counting the function's curly brackets
- Each line must be at most 80 columns wide, comments included
- A function can take 4 named parameters maximum
- No assigns and declarations in the same line (unless static or const)
- You can't declare more than 5 variables per function
- ...
```

# License
[MIT License](https://github.com/mxvements/ft_license/blob/main/LICENSE.txt)
