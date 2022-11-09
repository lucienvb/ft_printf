# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: lvan-bus <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/13 15:58:34 by lvan-bus      #+#    #+#                  #
#    Updated: 2022/11/02 17:34:40 by lvan-bus      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

#=======================================#
#========		VARIABLES:		========#
#=======================================#

NAME	:= libftprintf.a
CC		:= cc
CFLAGS	?= -Wall -Wextra -Werror

SRC		:= \
	ft_printf.c \
	ft_itoa.c \
	ft_puts.c \
	ft_str.c \
	ft_memcpy.c \
	ft_hex.c

OBJ		:= $(SRC:.c=.o)

#=======================================#
#========		RECIPIES		========#
#=======================================#

all:	$(NAME)

$(NAME): $(OBJ)
		ar -cr $(NAME) $(OBJ)

%.o: %.c
		$(CC) -c $(CFLAGS) -o $@ $^

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
