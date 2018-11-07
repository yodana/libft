NAME = libft.a

SRC = ft_putstr.c ft_putchar.c ft_putendl.c ft_putnbr.c ft_strnew.c

HEADER = includes/

BIN_FOLDER = ./bin/

OBJ = $(addprefix $(BIN_FOLDER),$(SRC:.c=.o))

all: bin $(NAME)

bin:
	mkdir bin

$(NAME):  $(OBJ)
	ar r $(NAME) $(OBJ)

$(BIN_FOLDER)%.o :srcs/%.c
	gcc $< -c -I $(HEADER) -o $@ -Wall -Wextra -Werror

clean: 
	rm -rf $(BIN_FOLDER)

fclean: clean
	rm -rf $(NAME)

re: fclean all
