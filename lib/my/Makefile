##
## EPITECH PROJECT, 2020
## Infinadd
## File description:
## Makefile
##

CC		= gcc

SRC		= *.c
OBJ		= *.o

NAME	= libmy.a

CFLAGS	= -W -Wall -Wextra

all:
	$(CC) -c $(SRC)
	$(AR) rsc $(NAME) $(OBJ)
	cp $(NAME) ..
	cp my.h ../../include/

clean:
	$(RM) $(OBJ)
	$(RM) *~
	$(RM) #*#
	$(RM) ../$(NAME)

fclean: clean
	$(RM) *.a
	$(RM) $(NAME)
	$(RM) ../../include/my.h
	$(RM) lib/libmy.a

re: fclean all
