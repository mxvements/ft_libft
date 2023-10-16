CC=cc

CFLAGS=-Wall -Wextra -Werror

NAME=libft.a

TEST_NAME=libft.out

MY_SOURCES= ft_isalpha.c \
			ft_isdigit.c \
			ft_isascii.c \
			ft_isalnum.c \
			ft_isprint.c \
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

MY_BONUS_SOURCES=	ft_lstnew.c \
					ft_lstadd_front.c \
					ft_lstsize.c \
					ft_lstlast.c \
					ft_lstadd_back.c \
					ft_lstdelone.c \
					ft_lstclear.c \
					ft_lstiter.c \
					ft_lstmap.c

MY_OBJECTS=$(MY_SOURCES:%.c=%.o)	

MY_BONUS_OBJECTS=$(MY_BONUS_SOURCES:%.c=%.o)

all: $(NAME)

$(NAME): $(MY_OBJECTS)
	ar -crs $@ $^

bonus: $(NAME) $(MY_BONUS_OBJECTS)
	ar -crs $^

test: main.o
	$(CC) main.o -o $(TEST_NAME) -L. -lft

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

