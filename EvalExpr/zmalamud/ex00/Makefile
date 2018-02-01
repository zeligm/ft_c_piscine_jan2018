# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zmalamud <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/27 15:33:12 by zmalamud          #+#    #+#              #
#    Updated: 2018/01/28 13:17:33 by zmalamud         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr

SRC += main.c
SRC += ft_functs.c
SRC += eval_expr.c

OBJ  = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -c $(SRC)
	gcc $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
