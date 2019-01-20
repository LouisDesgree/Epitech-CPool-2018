##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

SRC 	= 	calc.c \
	  		do_op.c \

NAME	=	do-op

OBJ		= $(SRC:.c=.o)

all: $(NAME)

$(NAME):		$(OBJ)
		cd ../lib/my && make re
		cd ../do_op/
		cc $(OBJ) -o $(NAME) -I ../include/ -L ../lib/ -lmy
clean:
		rm -rf $(OBJ)
fclean: clean
		rm -rf $(NAME)
re: fclean all