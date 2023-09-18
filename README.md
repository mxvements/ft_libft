<div align="center">
    <img src="https://img.shields.io/badge/status-ongoing-success?color=008485&style=flat-square" />
    <img src="https://img.shields.io/badge/started-11%20%2F%2009%20%2F%202023-success?color=008485&style=flat-square" />
    <img src="https://img.shields.io/badge/score---%20%2F%20100-success?color=008485&style=flat-square" />
    <img src="https://img.shields.io/github/languages/top/mxvements/ft_libft?color=008485&style=flat-square" />
    <img src="https://img.shields.io/github/last-commit/mxvements/ft_libft?color=008485&style=flat-square" />
    <a href='https://www.linkedin.com/in/luciami' target="_blank"><img alt='Linkedin' src='https://img.shields.io/badge/LinkedIn-100000?style=flat-square&logo=Linkedin&logoColor=white&labelColor=black&color=black'/></a>
    <a href='https://profile.intra.42.fr/users/luciama2' target="_blank"><img alt='42' src='https://img.shields.io/badge/Madrid-100000?style=flat-square&logo=42&logoColor=white&labelColor=000000&color=000000'/></a>
</div>

# About

The first project at 42, libft, involves learning how the standard functions of C programming work by writing them from scratch and creating a personal library. This project is vital as the library will be used in future assignments at 42.

<a href="https://github.com/jotavare/libft/blob/master/subject/en_subject_libft.pdf">

Click here</a> for the subject of this project.

# How to use

# :star: ft_ibft

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
| **ft_strlen** | [ ] |   |   |   |   | libc |
| **ft_strlcpy**  | [ ] |   |   |   |   | libc |
| **ft_strlcat**  | [ ] |   |   |   |   | libc |
| **ft_strchr**  | [ ] |   |   |   |   | libc |
| **ft_strrchr**  | [ ] |   |   |   |   | libc |
| **ft_strncmp**  | [ ] |   |   |   |   | libc |
| **ft_strnstr**  | [ ] |   |   |    |   | libc |
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
| **ft_strlen** | [ ] |   |   |   |   |   |
| **ft_strlcpy**  | [ ] |   |   |   |   |   |
| **ft_strlcat**  | [ ] |   |   |   |   |   |
| **ft_strchr**  | [ ] |   |   |   |   |   |
| **ft_strrchr**  | [ ] |   |   |   |   |   |
| **ft_strncmp**  | [ ] |   |   |   |   |   |
| **ft_strnstr**  | [ ] |   |   |    |   |   |

+ ft_memset
+ ft_bzero
+ ft_memcpy
+ ft_memmove
+ ft_memcmp
+ ft_calloc
+ ft_strdup

### Write to a file descriptor

+ ft_putchar_fd
+ ft_putstr_fd
+ ft_putendl_fd
+ ft_putnbr_fd

## Bonus