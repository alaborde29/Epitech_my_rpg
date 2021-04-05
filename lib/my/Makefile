##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

SRC	=	my_putchar.c \
		my_putstr.c \
		my_put_nbr.c \
		my_str_isnum.c \
		concat_params.c \
		my_str_isprintable.c \
		my_showmem.c \
		my_str_isupper.c \
		my_showstr.c \
		my_strlen.c \
		my_compute_power_rec.c \
		my_show_word_array.c \
		my_strlowcase.c \
		my_compute_square_root.c \
		my_sort_int_array.c \
		my_strncat.c \
		my_find_prime_sup.c \
		my_strcapitalize.c \
		my_strncmp.c \
		my_getnbr.c \
		my_strcat.c \
		my_strncpy.c \
		my_isneg.c \
		my_strcmp.c \
		my_strstr.c \
		my_is_prime.c \
		my_strcpy.c \
		my_str_to_word_array.c \
		my_strdup.c \
		my_strupcase.c \
		my_str_isalpha.c \
		my_swap.c \
		my_str_islower.c \
		my_revstr.c \
		my_puts.c \
		my_puts2.c \
		my_puts3.c \
		my_printf.c \
		params_list.c \
		params_list2.c \
		params_list3.c

OBJ	=	$(SRC:.c=.o)

CC = gcc

NAME	=	libmy.a

all:		$(NAME)

$(NAME):	$(OBJ)
			ar rc $(NAME) $(OBJ)
			mv $(NAME) ./../

clean:
			rm -f $(OBJ)

fclean:		clean
			rm -f $(NAME)
			rm -f ../libmy.a

re:			fclean all

.PHONY: fclean clean re all
