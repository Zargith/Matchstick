##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile for the lib
##

NAME	=	libmy.a

SRC	=	my_compute_power_rec.c		\
		my_compute_square_root.c	\
		my_getnbr.c			\
		my_isneg.c			\
		my_putchar.c			\
		my_put_nbr.c			\
		my_putstr.c			\
		my_revstr.c			\
		my_showstr.c			\
		my_show_word_array.c		\
		my_sort_int_array.c		\
		my_strcapitalize.c		\
		my_strcat.c			\
		my_strcmp.c			\
		my_strcpy.c			\
		my_strdup.c			\
		my_str_isalpha.c		\
		my_str_islower.c		\
		my_str_isnum.c			\
		my_str_isprintable.c		\
		my_str_isupper.c		\
		my_strlen.c			\
		my_strlowcase.c			\
		my_strncat.c			\
		my_strncmp.c			\
		my_strncpy.c			\
		my_strupcase.c			\
		my_swap.c			\
		my_printf.c			\
		needs_for_my_printf.c		\
		getnextline.c

OBJ	=	$(SRC:%.c=%.o)

INC	=	-I ./includes

CFLAGS	=	$(INC)

all:		$(NAME)

$(NAME):	$(OBJ)
		ar rc $(NAME) $(OBJ)

clean:
		$(RM) -f $(OBJ)

fclean: 	clean
		$(RM) -f $(NAME)

re:		fclean all
