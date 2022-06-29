##
## EPITECH PROJECT, 2021
## makefile for my_sifleinfo
## File description:
## Makefile
##

CC		=	gcc

CFLAGS	=	-g3 -W -Wall -Wextra -Ofast -Iinclude/

SRC		=	$(wildcard *.c) \
			$(wildcard src/*.c) \

OBJ		=	$(SRC:.c=.o)

TARGET	=	push_swap

all:	$(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(TARGET)
	rm -f a.out

re: fclean all
