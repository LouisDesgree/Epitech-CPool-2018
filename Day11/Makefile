##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

SRC 	= 	my_params_to_list.c \
			my_list_size.c \
			my_apply_on_nodes.c \
			my_rev_list.c \
			my_apply_on_matching_nodes.c \
			my_delete_nodes.c \
			my_find_node.c \

NAME	=	a.out

OBJ		= $(SRC:.c=.o)

all: $(NAME)

$(NAME):		$(OBJ)
		cd lib/my && make re
		cd ../
		gcc $(OBJ) -o $(NAME) -I include/ -L lib/ -lmy
clean:
		rm -rf $(OBJ)
fclean: clean
		rm -rf $(NAME)
re: fclean all