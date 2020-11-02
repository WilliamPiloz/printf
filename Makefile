##
## EPITECH PROJECT, 2020
## printf
## File description:
## bootstrap
##

CC	=	gcc

LIB	=	libbsprintf.a

SRC	=	$(wildcard *.c)

OBJ	=	$(SRC!.c=.o)

all:	lib compile

clean:
	rm -f $(OBJ)
	echo "clean ok"

fclean: clean
	rm -f 

re:

unit_tests:

run_tests: