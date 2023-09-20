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

| **Name** | Status | Prototype | Library | Short description | Dependencies | Section |
| ---------| ------ | --------- | ------- | ----------------- | ------------ | ------- |
| **ft_isalpha** | [x] | int ft_isalpha(int c) | ctype.h | Test for any character for whis isupper or islower is true. Returns: (0) if false, (non-zero) if true | ft_isupper*, ft_islower* | libc |
| **ft_isdigit**  | [x] | int ft_isdigit(int c) | ctype.h | Test for decimal digit character (ascii 48..57). Return: (0) if false, (non-zero) if true |   | libc |
| **ft_isalnum**  | [x] | int ft_isalnum(int c) | ctype.h | Tests for any character or which isalpha or isdigit is true. Return: (0) if false, (non-zero) if true. | ft_isdigit, ft_isalpha | libc |
| **ft_isascii**  | [x] | int ft_isascii(int c) | ctype.h | Test for ascii character (dec 0..127 included). Return: (0) if false, (non-zero) if true |   | libc |
| **ft_isprint**  | [x] | int ft_isprint(int c) | ctype.h | Tets for any printing character (ascii dec 32..136). Return: (0) if false, (nonzero) if true |   | libc |
| **ft_toupper**  | [x] | int ft_toupper(int c) | ctype.h | Converts lower-case to the corresponding upper-case. Return: the corresponding upper-case char, otherwise the argument is returned unchanged (was already uppercase or not a char) | ft_islower* | libc |
| **ft_tolower**  | [x] | int ft_tolower(int c) | ctype.h | Converts upper-case to the corresponding lower-case. Return: the corresponding lower-case char, otherwise the argument is returned unchanged (was already lower-case or not a char)  | ft_isupper* | libc |

ft_isupper, ft_islower -> added after completion of the project, included as static where needed.

### Manipulate strings

| **Name** | Status | Prototype | Library | Short description | Dependencies | Section |
| ---------| ------ | --------- | ------- | ----------------- | ------------ | ------- |
| **ft_strlen** | [x] |   |   |   |   | libc |
| **ft_strlcpy**  | [x] |   |   |   |   | libc |
| **ft_strlcat**  | [x] |   |   |   |   | libc |
| **ft_strchr**  | [x] |   |   |   |   | libc |
| **ft_strrchr**  | [x] |   |   |   |   | libc |
| **ft_strncmp**  | [x] |   |   |   |   | libc |
| **ft_strnstr**  | [x] |   |   |    |   | libc |
| **ft_substr**  | [ ] |   |   |    |   | add |
| **ft_strjoin**  | [ ] |   |   |    |   | add |
| **ft_strtrim**  | [ ] |   |   |    |   | add |
| **ft_split**  | [ ] |   |   |    |   | add |
| **ft_strmapi**  | [ ] |   |   |    |   | add |
| **ft_striteri**  | [ ] |   |   |    |   | add |

### Manipulate numbers

| **Name** | Status | Prototype | Library | Short description | Dependencies | Section |
| ---------| ------ | --------- | ------- | ----------------- | ------------ | ------- |
| **ft_atoi** | [ ] |   |   |   |   | libc |
| **ft_itoa**  | [ ] |   |   |   |   | add |

### Manipulate memory

| **Name** | Status | Prototype | Library | Short description | Dependencies | Section |
| ---------| ------ | --------- | ------- | ----------------- | ------------ | ------- |
| **ft_memset** | [x] |   |   |   |   | libc |
| **ft_bzero** | [x] |   |   |   |   | libc |
| **ft_memcpy**  | [ ] |   |   |   |   | libc |
| **ft_memmove**  | [ ] |   |   |   |   | libc |
| **ft_memchr**  | [ ] |   |   |   |   | libc |
| **ft_memcmp**  | [ ] |   |   |   |   | libc |
| **ft_calloc**  | [ ] |   |   |   |   | libc |
| **ft_strdup**  | [ ] |   |   |    |   | libc |


### Write to a file descriptor

| **Name** | Status | Prototype | Library | Short description | Dependencies | Section |
| ---------| ------ | --------- | ------- | ----------------- | ------------ | ------- |
| **ft_putchar_fd** | [ ] |   |   |   |   | add |
| **ft_putstr_fd** | [ ] |   |   |   |   | add |
| **ft_putendl_fd**  | [ ] |   |   |   |   | add |
| **ft_putnbr_fd**  | [ ] |   |   |   |   | add |

## Bonus

### Write to a file descriptor

| **Name** | Status | Prototype | Library | Short description | Dependencies | Section |
| ---------| ------ | --------- | ------- | ----------------- | ------------ | ------- |
| **ft_lstnew** | [ ] |   |   |   |   | bonus |
| **ft_lstadd_front** | [ ] |   |   |   |   | bonus |
| **ft_lstsize**  | [ ] |   |   |   |   | bonus |
| **ft_lstlast**  | [ ] |   |   |   |   | bonus |
| **ft_lstadd_back**  | [ ] |   |   |   |   | bonus |
| **ft_lstdelone**  | [ ] |   |   |   |   | bonus |
| **ft_lstclear**  | [ ] |   |   |   |   | bonus |
| **ft_lstiter**  | [ ] |   |   |   |   | bonus |
| **ft_lstmap**  | [ ] |   |   |   |   | bonus |

# Other

## Contact

## License

## Aknowledgments