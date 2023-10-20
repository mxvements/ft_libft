CC=gcc

CFLAGS=-Wall -Wextra -Werror

NAME=libft.a

TEST_NAME=libft.out

MY_SOURCES= ft_isalpha.c \
			ft_isdigit.c \
			ft_isascii.c \
			ft_isalnum.c \
			ft_isprint.c \
			ft_islower.c \
			ft_isupper.c \
			ft_isspace.c \
			ft_strlen.c \
			ft_memset.c \
			ft_bzero.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_strlcpy.c \
			ft_strlcat.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strncmp.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_strnstr.c \
			ft_atoi.c \
			ft_calloc.c \
			ft_strdup.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_split.c \
			ft_itoa.c \
			ft_strmapi.c \
			ft_striteri.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c

MY_BONUS_SOURCES=	ft_lstnew_bonus.c \
					ft_lstadd_front_bonus.c \
					ft_lstsize_bonus.c \
					ft_lstlast_bonus.c \
					ft_lstadd_back_bonus.c \
					ft_lstdelone_bonus.c \
					ft_lstclear_bonus.c \
					ft_lstiter_bonus.c \
					ft_lstmap_bonus.c

MY_OBJECTS=$(MY_SOURCES:%.c=%.o)	

MY_BONUS_OBJECTS=$(MY_BONUS_SOURCES:%.c=%.o)

all: $(NAME)

$(NAME): $(MY_OBJECTS)
	ar -crs $@ $^

bonus: $(NAME) $(MY_BONUS_OBJECTS)
	ar -crs $^

test: test_libft.o
	$(CC) test_libft.o -o $(TEST_NAME) -L. -lft

%.o: %.c
	$(CC) $(CFLAGS)	-c $<

clean:
	rm -rf *.o $(MY_OBJECTS) $(MY_BONUS_OBJECTS)

tclean: clean
	rm -rf $(TEST_NAME)

fclean: clean
	rm -rf $(NAME)

norminette:
	norminette $(MY_SOURCES)

re:	fclean all

