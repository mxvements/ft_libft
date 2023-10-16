<div align="center">
    <img src="https://img.shields.io/badge/status-ongoing-success?color=00ABAD&style=flat-square" />
    <img src="https://img.shields.io/badge/started-11%20%2F%2009%20%2F%202023-success?color=00ABAD&style=flat-square" />
    <img src="https://img.shields.io/badge/score---%20%2F%20100-success?color=00ABAD&style=flat-square" />
    <img src="https://img.shields.io/github/languages/top/mxvements/ft_libft?color=00ABAD&style=flat-square" />
    <img src="https://img.shields.io/github/last-commit/mxvements/ft_libft?color=00ABAD&style=flat-square" />
    <br>
    <a href='https://www.linkedin.com/in/luciami' target="_blank"><img alt='Linkedin' src='https://img.shields.io/badge/LinkedIn-100000?style=flat-square&logo=Linkedin&logoColor=white&labelColor=black&color=black'/></a>
    <a href='https://profile.intra.42.fr/users/luciama2' target="_blank"><img alt='42' src='https://img.shields.io/badge/Madrid-100000?style=flat-square&logo=42&logoColor=white&labelColor=000000&color=000000'/></a>
    <br>
    <a href="#about-the-project-pushpin">About the project</a> / <a href="#how-to-use-bulb">How to use</a> / <a href="#ft_libft-star">ft_libft</a> / <a href="#other">Other</a>
    <br><br>
</div>

# About the project
The first project at 42, libft, involves learning how the standard functions of C programming work by writing them from scratch and creating a personal library. This project is vital as the library will be used in future assignments at 42.

<a href="https://github.com/jotavare/libft/blob/master/subject/en_subject_libft.pdf">

Click here</a> for the subject of this project.

# How to use 

# ft_libft :star:
  
| **Program name** | libft.a |
| ---------------- | ------- |
| **Turn in files** | Makefile, libft.h, ft_*.c |
| **Makefile** | NAME, all, clean, fclean, re |
| **External functs** | Detailed below (libc, add, bonus) |
| **Libft authorized** | n/a |
| **Description** | Write your own library: a collection of functions that will be a useful tool for your cursus. |

+ Mandatory part
  + Part 1: libc functins
  + Part 2: additional funcionts
  
+ Bonus part


## Mandatory part

### Check and manipulate characters

| **Name** | Status | Library | Prototype | Short description | Dependencies | Section |
| ---------| ------ | --------- | ------- | ----------------- | ------------ | ------- |
| **ft_isalpha** | [x] | ctype.h | int ft_isalpha(int c) | Test for any character for whis isupper or islower is true. Returns: (0) if false, (non-zero) if true | ft_isupper*, ft_islower* | libc |
| **ft_isdigit**  | [x] | ctype.h | int ft_isdigit(int c) | Test for decimal digit character (ascii 48..57). Return: (0) if false, (non-zero) if true |   | libc |
| **ft_isalnum**  | [x] | ctype.h | int ft_isalnum(int c) | Tests for any character or which isalpha or isdigit is true. Return: (0) if false, (non-zero) if true. | ft_isdigit, ft_isalpha | libc |
| **ft_isascii**  | [x] | ctype.h | int ft_isascii(int c) | Test for ascii character (dec 0..127 included). Return: (0) if false, (non-zero) if true |   | libc |
| **ft_isprint**  | [x] | ctype.h | int ft_isprint(int c) | Tets for any printing character (ascii dec 32..136). Return: (0) if false, (nonzero) if true |   | libc |
| **ft_toupper**  | [x] | ctype.h | int ft_toupper(int c) | Converts lower-case to the corresponding upper-case. Return: the corresponding upper-case char, otherwise the argument is returned unchanged (was already uppercase or not a char) | ft_islower* | libc |
| **ft_tolower**  | [x] | ctype.h | int ft_tolower(int c) | Converts upper-case to the corresponding lower-case. Return: the corresponding lower-case char, otherwise the argument is returned unchanged (was already lower-case or not a char)  | ft_isupper* | libc |

ft_isupper, ft_islower, ft_isspace -> added after completion of the project, included as static where needed.

### Manipulate strings

| **Name** | Status | Library | Prototype | Short description | Dependencies | Section |
| ---------| ------ | --------- | ------- | ----------------- | ------------ | ------- |
| **ft_strlen** | [x] | string.h | size_t strlen(const char *s) | compute the length of s, number of characters that preecede NULL character | - | libc |
| **ft_strlcpy**  | [x] | string.h | size_t ft_strlcpy(char *dst, const char *src, size_t dstsize) | size-bounded string copying, copies up to (len -1) size != 0 from src to dst, NULL terminating the result if | ft_strlen(src) | libc |
| **ft_strlcat**  | [x] | string.h | size_t ft_strlcat(char *dst, const char *src, size_t size) | size-bounded string copying and concatenation, appends string src to the end of dst, it will append at most size - strlen(dst) -1 | - | libc |
| **ft_strchr**  | [x] | string.h | char *ft_strchr(const char *s, int c) | locates the char (ascii representation) 'c' in 's' the terminating null is considered as part of the string | - | libc |
| **ft_strrchr**  | [x] | string.h | char *strrchr(const char *s, int c) | locate character in string, the last occurrence of c | - | libc |
| **ft_strncmp**  | [x] | string.h | int ft_strncmp(const char *s1, const char *s2, size_t n) | compare strings, not more than n characters compare strings, not more than n characters, the comparison is done using unsigned characters | - | libc |
| **ft_strnstr**  | [x] | string.h | char *ft_strnstr(const char *haystack, const char *needle, size_t len) | locates the first occurrence of the null-terminate string needle' in the string 'haystack', where not more than 'len' characters are searched. | - | libc |
| **ft_substr**  | [x] | - | char *ft_substr(char const *s, unsigned int start, size_t len) |  allocates (with malloc(3)) and returns a substring from 's' the substring begins at start and is max of size len | malloc | add |
| **ft_strjoin**  | [x] | - | char *ft_strjoin(char const *s1, char const *s2) | allocates (with malloc(3)) and returns a new sring, which is the result of the concatenation of s1 and s2 | malloc | add |
| **ft_strjoin**  | [x] | - | char *ft_strjoin(char const *s1, char const *s2) | allocates (with malloc(3)) and returns a new sring, which is the result of the concatenation of s1 and s2 | malloc | add |
| **ft_strtrim**  | [x] | - | char *ft_strtrim(char const *s1, char const *set) | allocates (with malloc(3)) and returns a copy of s1 with the characters specified in 'set' removed from the beginning and the end of the string | malloc, ft_strlen, ft_substr, ft_getfirstindex, ft_getlastindex, ft_strchr | add |
| **ft_split**  | [x] | - | char **ft_split(char const *s, char c) | allocates (with malloc(3)) and returns an array of strings obtained by splitting 's' using the character 'c' as a delimiter. The array must end with a NULL pointer. | malloc, ft_strtrimwrapper, t_substr, ft_countwords | add |
| **ft_strmapi**  | [x] | - | char *ft_strmapi(char const *s, char (*f)(unsigned int, char)) | applies 'f' to each character of 's', and passing its index as first argument to create a new string | malloc (w/ malloc) resulting from successive applications of 'f' | add |
| **ft_striteri**  | [x] | - | ft_striteri(char *s, void (*f)(unsigned int, char*)) | applies 'f' on each character of the string passed as argument, passing its index as first argument. | - | add |

### Manipulate numbers

| **Name** | Status | Library | Prototype | Short description | Dependencies | Section |
| ---------| ------ | --------- | ------- | ----------------- | ------------ | ------- |
| **ft_atoi** | [x] | stdlib.h | int atoi(const char *str) | convert initial portion of str to int representation | ft_isspace, ft_isdigit | libc |
| **ft_itoa**  | [x] | - | char *ft_itoa(int n) | allocates (with malloc(3)) and returns a string representing the int received as an argument. Negative numbers must be handled. | malloc, ft_countdigits | add |

### Manipulate memory

| **Name** | Status | Library | Prototype | Short description | Dependencies | Section |
| ---------| ------ | --------- | ------- | ----------------- | ------------ | ------- |
| **ft_memset** | [x] | string.h | void *memset(void *b, int c, size_t len) | writes 'len' bytes of value 'c '(converted to unsigned char) to the str 'b'. | - | libc |
| **ft_bzero** | [x] | strings.h | void (void *s, size_t n) | erases the data int the 'n' bytes of the memory starting | ft_memset at the location pointed by 's', by writing '0' in the area | libc |
| **ft_memcpy**  | [x] | string.h | void *memcpy(void *dst, void *src, size_t n) | copy 'n' bytes from 'src' to 'dst' f 'dst' and 'src' overlap, behaviour is undefined | - | libc |
| **ft_memmove**  | [x] | string.h | void *memmove(void *dst, const void *src, size_t n) | copy 'n' bytes from src to dst if 'src' and 'dst' overlap, the copy is always done in a non-destructive manner (memory safe) | ft_memcpy | libc |
| **ft_memchr**  | [x] | string.h | void *ft_memchr(const void *s, int c, size_t n) | scans 'n' bytes form 's' to search for the 1st instance of 'c', both c and s are interpreted as unsigned char | - | libc |
| **ft_memcmp**  | [x] | string.h | int ft_memcmp(const void *s1, const void *s2, size_t n) | compare byte string 's1' against 's2', both assumed 'n' bytes long | - | libc |
| **ft_calloc**  | [x] | stdlib.h | void *calloc(size_t count, size_t size) | memory allocation with enough space for count objects that are size bytes of memory each and returns a pointerto the allocated memory filled with bytes of i value (0) | malloc | libc |
| **ft_strdup**  | [x] | string.h | char *ft_strdup(const char *s1) | saves a cpy of the str 's1', allocating anough memory, doing the copy and returning the ptr to it. allocates at most 'n' char from 's1' always terminating the copied str. | malloc | libc |


### Write to a file descriptor

| **Name** | Status | Library | Prototype | Short description | Dependencies | Section |
| ---------| ------ | --------- | ------- | ----------------- | ------------ | ------- |
| **ft_putchar_fd** | [x] | - | void ft_putchar_fd(hcar c, int fd) | outputs the char 'c' to the given file descriptor | write | add |
| **ft_putstr_fd** | [x] | - | void ft_putstr_fd(char *s, int fd) | outputs the string 's' to the given file descriptor | write | add |
| **ft_putendl_fd**  | [x] | - | void ft_putendl_fd(char *s, int fd) | ouputs the string 's' to the given file descriptor followed by a new line | write | add |
| **ft_putnbr_fd**  | [x] | - | void ft_putnbr_fd(int n, int fd); | outputs the integer 'n' to the given file descriptor | write | add |

## Bonus

### Manipulate linked lists

| **Name** | Status | Library | Prototype | Short description | Dependencies | Section |
| ---------| ------ | --------- | ------- | ----------------- | ------------ | ------- |
| **ft_lstnew** | [x] | - | t_list *ft_lstnew(void *content) | allocates (with malloc(3)) and returns a new node. the member variable 'content' is inizialized with the value of the param 'content', the variable 'next' is initilized to NULL | malloc | bonus |
| **ft_lstadd_front** | [x] | - | void ft_lstadd_front(t_list **lst, t_list *new) | ads the node 'new' at the beginning of the list | - | bonus |
| **ft_lstsize**  | [x] | - | int	ft_lstsize(t_lst *lst) | counts the number of nodes in a list | - |bonus |
| **ft_lstlast**  | [x] | - | t_list ft_llstlast(t_list *lst) | return the last node of the list | - | bonus |
| **ft_lstadd_back**  | [x] | - | void ft-lstadd_back(t_list **lst, t_list *new) | adds the node 'new' at the end of the list | - | bonus |
| **ft_lstdelone**  | [x] | - | void ft_lstdelone(t_list *lst, void (*del)(void*)) | takes as parameter the node and frees the memory of the node's content using the function 'del' given as a param and free the node, the memory 'next' must not be freed. | free | bonus |
| **ft_lstclear**  | [x] | - | void ft_lstclear(t_list **lst, void (*del)(void *)) | deletes and frees the given node and every successor of that node, using the function 'del' and free(3) | free | bonus |
| **ft_lstiter**  | [x] | - | void ft_lstiter(t_list *lst, void (*f)(void *)) | iterates the list 'lst' and applies the function 'f' on the content of each node. | - | bonus |
| **ft_lstmap**  | [x] | - | t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *)) | iterates the list 'lst' and applies the funcion 'f' on the content of each node. creates a new list resulting of the successive applications of the function 'f' the 'del' function is used to delete the content of a node if needed | malloc, free, ft_lstnew, ft_lstclear, ft_lstadd_back | bonus |

# Other

## Contact

## License

## Aknowledgments