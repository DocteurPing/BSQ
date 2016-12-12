##
## Makefile for makefile in /home/cedric/Documents/PSU_2016_my_printf
##
## Made by OGIRE Cedric
## Login   <cedric@epitech.net>
##
## Started on  Thu Nov 17 10:30:31 2016 OGIRE Cedric
## Last update Thu Dec  8 11:27:29 2016 OGIRE Cedric
##

NAME	=	libmy.a

SRC	=	my_put_binary.c	\
		my_putchar.c	\
		my_put_hexa.c	\
		my_put_hexam.c	\
		my_put_long.c	\
		my_put_nbr.c	\
		my_put_oct.c	\
		my_putstr.c	\
		my_put_unbr.c	\
		my_revstr.c	\
		my_strcpy.c	\
		my_strlen.c	\
		my_put_s.c	\
		my_printf.c	\
		my_putstr_err.c	\
		my_putchar_err.c

OBJ	=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rvs $(NAME) $(OBJ)
	cp my.h ../../include

clean:
	rm -f $(OBJ)
	rm -f ../../include/my.h

fclean:	clean
	rm -f $(NAME)

re:	fclean all
