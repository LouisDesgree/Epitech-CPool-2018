##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

SRC 	= 	cat.c \
			main.c \

NAME	=	cat

CFLAGS	=	-I ../include/

LDFLAGS =	-L ../lib/ -lmy

CC		= 	gcc

OBJ		= $(SRC:.c=.o)

all: $(NAME)

$(NAME):		$(OBJ)
		$(MAKE) -C ../lib/my
		$(CC) $(OBJ) -o $(NAME) $(LDFLAGS)
clean:
		rm -rf $(OBJ)
		$(MAKE) -C ../lib/my clean
fclean: clean
		rm -rf $(NAME)
		$(MAKE) -C ../lib/my fclean
re: fclean all

tests_run:
	$(MAKE) -C ../tests