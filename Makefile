##
## Makefile for makefile in /home/cedric/Documents/wireframe
## 
## Made by OGIRE Cedric
## Login   <cedric@epitech.net>
## 
## Started on  Mon Dec  5 16:31:52 2016 OGIRE Cedric
## Last update Sat Dec 17 17:00:43 2016 cedric
##

SRC	=	src/bsq.c		\
		src/check_error.c	\
		src/algo.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	+=	-Iinclude -lm -Llib/my -lmy -g3

NAME	=	bsq

all:	libs $(NAME)

$(NAME):	$(OBJ)
	gcc -W -Wall -Wextra $(OBJ) $(CFLAGS) lib/my/libmy.a -o $(NAME)

libs:
	cd lib/my/ && make all

clean:
	rm -f $(OBJ)
	cd lib/my/ && make clean

fclean:	clean
	rm -f $(NAME)
	cd lib/my/ && make fclean

re:	fclean all
