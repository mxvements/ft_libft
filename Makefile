CC=gcc
CFLAGS=-Wall -Wextra -Werror -g3
NAME=libft.a
TEST_NAME=libft.out

# char check & manipulation files
CHAR_PATH=	./char/
CHAR_FILES=	ft_isalpha.c \
			ft_isdigit.c \
			ft_isascii.c \
			ft_isalnum.c \
			ft_isprint.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_islower_extra.c \
			ft_isspace_extra.c \
			ft_issign_extra.c \
			ft_isupper_extra.c 

# number manipulation files
NBR_PATH=	./nbr/
NBR_FILES=	ft_atoi.c \
			ft_itoa.c \
			ft_atoif_extra.c

# memory manipulation
MEM_PATH=	./mem/
MEM_FILES=	ft_memset.c \
			ft_bzero.c \
			ft_calloc.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_strdup.c

# string manipulation
STR_PATH=	./str/
STR_FILES=	ft_substr.c \
			ft_strlen.c \
			ft_strlcpy.c \
			ft_strlcat.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_split.c \
			ft_strmapi.c \
			ft_striteri.c

# put text on outfile
PUT_PATH=	./put/
PUT_FILES=	ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c

# linked lists
LST_PATH=	./lst/
LST_FILES=	ft_lstnew_bonus.c \
			ft_lstadd_front_bonus.c \
			ft_lstsize_bonus.c \
			ft_lstlast_bonus.c \
			ft_lstadd_back_bonus.c \
			ft_lstdelone_bonus.c \
			ft_lstclear_bonus.c \
			ft_lstiter_bonus.c \
			ft_lstmap_bonus.c

# doubled-linked lists
DLST_PATH=	./dlst/
DLST_FILES=	ft_dllnew_extra.c \
			ft_dlladd_front_extra.c \
			ft_dllsize_extra.c \
			ft_dlllast_extra.c \
			ft_dlladd_back_extra.c \
			ft_dlldelone_extra.c \
			ft_dllclear_extra.c \
			ft_dlliter_extra.c \
			ft_dllmap_extra.c
# objs
OBJ_PATH =	./.obj/
OBJ=		$(CHAR_FILES:%.c=$(OBJ_PATH)%.o) \
			$(NBR_FILES:%.c=$(OBJ_PATH)%.o) \
			$(MEM_FILES:%.c=$(OBJ_PATH)%.o) \
			$(STR_FILES:%.c=$(OBJ_PATH)%.o) \
			$(PUT_FILES:%.c=$(OBJ_PATH)%.o) \
			$(LST_FILES:%.c=$(OBJ_PATH)%.o) \
			$(DLST_FILES:%.c=$(OBJ_PATH)%.o) 
			

#rules
all: $(NAME)

$(NAME): $(OBJ)
	ar -crs $@ $^

$(OBJ_PATH)%.o: $(CHAR_PATH)%.c
	@mkdir -p $(OBJ_PATH)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_PATH)%.o: $(NBR_PATH)%.c
	@mkdir -p $(OBJ_PATH)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_PATH)%.o: $(MEM_PATH)%.c
	@mkdir -p $(OBJ_PATH)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_PATH)%.o: $(STR_PATH)%.c
	@mkdir -p $(OBJ_PATH)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_PATH)%.o: $(PUT_PATH)%.c
	@mkdir -p $(OBJ_PATH)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_PATH)%.o: $(LST_PATH)%.c
	@mkdir -p $(OBJ_PATH)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_PATH)%.o: $(DLST_PATH)%.c
	@mkdir -p $(OBJ_PATH)
	$(CC) $(CFLAGS) -c $< -o $@


test: test_libft.o
	$(CC) test_libft.o -o $(TEST_NAME) -L. -lft

clean:
	rm -rf $(OBJ)
	rm -rf $(OBJ_PATH)

fclean: clean
	rm -f $(NAME)

tclean: fclean
	rm -rf $(TEST_NAME)
	
norminette:
	norminette $(CHAR_FILES) 
	norminette $(NBR_FILES) 
	norminette $(MEM_FILES) 
	norminette $(STR_FILES)
	norminette $(PUT_FILES)
	norminette $(LST_FILES)
	norminette $(DLST_FILES)

re:	fclean all

.PHONY: re fclean clean norminette test tclean