NAME =		scop

CC =		gcc

FLG =		-Wall -Wextra -Werror

LIB =		-L./libft -lft

INC =		-I./inc -I./libft/includes

SRC_DIR =	src/

SRC_FILES =	main.c			\
			obj_parser.c	\
			array_3dv.c		\
			array_2dp.c		\

OBJ =		$(SRC_FILES:.c=.o)

SRC =		$(addprefix $(SRC_DIR), $(SRC_FILES))

all: $(NAME)

$(NAME):
	make -C ./libft
	$(CC) -c $(FLG) $(INC) $(SRC)
	$(CC) -o $(NAME) $(OBJ) $(LIB)

clean:
	rm -f $(OBJ)

fclean: clean
	make -C ./libft fclean
	rm -f $(NAME)

re: fclean all
