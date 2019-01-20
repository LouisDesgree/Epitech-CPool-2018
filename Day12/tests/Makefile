##
## EPITECH PROJECT, 2018
## TEST MAKE FILE
## File description:
## MAKEFILE
##

NAME	=	test

SRC_DIR	=	../cat

SRC = 	$(SRC_DIR)/cat.c \

SRC_TEST = test_cat.c

OBJ = $(SRC:%.c=%.o) $(SRC_TEST:%.c=%.o)

CFLAGS =	-I ../include

LDFLAGS	=	-L ../lib -lmy -lcriterion --coverage

CC	=	gcc

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)
	./test
clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all