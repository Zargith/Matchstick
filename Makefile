##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

NAME	=	matchstick

SRCS	=	sources/main.c				\
		sources/my_display_double_array.c	\
		sources/gameloop.c			\
		sources/checks.c			\
		sources/ai_turn.c			\
		sources/player_turn.c			\
		sources/free_map.c			\

OBJS	=	$(SRCS:%.c=%.o)

INC	=	-I ./includes

INC_LIB	=	-I ./lib/my/includes

LIBS	=	-L ./lib/my -lmy

LIB	=	make -C lib/my/

CFLAGS	=	$(INC) $(INC_LIB) -Wextra -Wall -Werror

CC	=	gcc

all:		$(NAME)

$(NAME):	$(OBJS)
		$(LIB)
		$(CC) -o $(NAME) $(OBJS) $(LIBS)

clean:
		$(RM) -f $(OBJS)
		make clean -C lib/my/

fclean:		clean
		$(RM) -f $(NAME)
		make fclean -C lib/my/

re:		fclean all

debug:		CFLAGS += -g
debug:		re
