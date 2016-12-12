##
## Makefile for makefile in /home/cedric/Documents/wireframe
## 
## Made by OGIRE Cedric
## Login   <cedric@epitech.net>
## 
## Started on  Mon Dec  5 16:31:52 2016 OGIRE Cedric
## Last update Mon Dec 12 18:02:37 2016 cedric
##

SRC	=	src/bsq.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	+=	-Iinclude -lm -Llib/my -lmy

NAME	=	bsq

all:	libs $(NAME)

$(NAME):	$(OBJ)
	gcc -W -Wall $(OBJ) $(CFLAGS) lib/my/libmy.a -o $(NAME)

libs:
	cd lib/my/ && make all

clean:
	rm -f $(OBJ)
	cd lib/my/ && make clean

fclean:	clean
	rm -f $(NAME)
	cd lib/my/ && make fclean

re:	fclean all
