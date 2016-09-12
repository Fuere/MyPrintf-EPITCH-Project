##
## Makefile for  in /home/sagot_g/rendu/PSU_2015_my_printf
##
## Made by guillaume sagot
## Login   <sagot_g@epitech.net>
##
## Started on  Mon Nov  2 09:48:20 2015 guillaume sagot
## Last update Mon Sep 12 22:00:58 2016 Guillaume SAGOT
##

COMP 	=	gcc -c

CFLAGS	+=	-Werror -Wextra -Wall -W
CFLAGS	+=	-ansi -pedantic -O -O3
CFLAGS	+=	-Iinclude

NAME	=	my_printf

LIBRARY = 	libmy.a

PRNTF	=	sources

SRC	=	$(PRNTF)/flags.c  			\
		$(PRNTF)/my_printf.c			\
		$(PRNTF)/flags_t_p.c  			\
		$(PRNTF)/flags_s_p.c  			\
		$(PRNTF)/main_printf.c 			\
		$(PRNTF)/library_tools.c  		\
		$(PRNTF)/library_display.c  		\
		$(PRNTF)/library_display_ext.c		\

OBJ	=	$(SRC:.c=.o)

all	:	$(NAME)

$(NAME):	$(OBJ)
		$(COMP) $(SRC) $(CFLAGS)
		ar rc libmy.a $(OBJ)
		mkdir -p obj
		mv -f $(OBJ) obj
		rm *.o
		ranlib 	libmy.a

clean	:
		rm -f $(OBJ)

fclean	:	clean
		rm -fr *.a obj

re	:	fclean all

.PHONY	:	all clean fclean re
