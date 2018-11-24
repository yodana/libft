NAME = libft.a

SRC = ft_bzero.c ft_putstr.c ft_putchar.c ft_putendl.c ft_putnbr.c ft_strnew.c \
	ft_putchar_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_putendl_fd.c \
	ft_strlen.c ft_memset.c ft_isalpha.c ft_isdigit.c ft_isalnum.c \
	ft_memmove.c ft_memchr.c ft_memcmp.c ft_strdup.c ft_strcpy.c \
	ft_strncpy.c ft_strcat.c ft_strncat.c ft_strlcat.c ft_strchr.c \
	ft_strrchr.c ft_strstr.c ft_strncmp.c ft_strcmp.c ft_atoi.c \
	ft_toupper.c ft_memdel.c ft_tolower.c ft_memalloc.c ft_strnstr.c \
	ft_strclr.c ft_memcpy.c ft_memccpy.c ft_isascii.c ft_isprint.c \
	ft_strdel.c ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c \
	ft_strequ.c ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c \
	ft_strsplit.c ft_itoa.c ft_lstnew.c ft_lstdelone.c ft_lstdel.c \
	ft_lstadd.c ft_lstiter.c ft_lstmap.c

HEADER = libft.h

BIN_FOLDER = ./bin/

OBJ = $(addprefix $(BIN_FOLDER),$(SRC:.c=.o))

all: bin $(NAME)

bin:
	mkdir bin

$(NAME):  $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@printf "LIBFT DONE SUCESS"

$(BIN_FOLDER)%.o :%.c
	@gcc $< -c -I $(HEADER) -o $@ -Wall -Wextra -Werror 
	@printf "$< done \r"
	 
clean: 
	rm -rf $(BIN_FOLDER)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re 
