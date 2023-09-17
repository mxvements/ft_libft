CC=cc

CFLAGS=-Wall -Wextra -Werror

NAME=libft.a

TEST_NAME=libft.out

MY_SOURCES= ft_islower.c \
			ft_isupper.c \
			ft_isalpha.c \
			ft_isdigit.c \
			ft_isascii.c \
			ft_isalnum.c \
			ft_isprint.c \
			ft_strlen.c \
			ft_toupper.c \
			ft_tolower.c

MY_OBJECTS=$(MY_SOURCES:%.c=%.o)	

all: $(NAME)

$(NAME): $(MY_OBJECTS)
	ar crs $@ $^

test: main.o
	$(CC) main.o -o $(TEST_NAME) -L. -lft

%.o: %.c
	$(CC) $(CFLAGS)	-c $<

clean:
	rm -rf *.o $(MY_OBJECTS)

tclean: clean
	rm -rf $(TEST_NAME)

fclean: clean
	rm -rf $(NAME)

norminette:
	norminette $(MY_SOURCES)

re:	fclean all
