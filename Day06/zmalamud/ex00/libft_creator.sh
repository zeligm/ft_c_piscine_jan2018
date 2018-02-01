# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zmalamud <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/17 11:18:01 by zmalamud          #+#    #+#              #
#    Updated: 2018/01/17 11:19:10 by zmalamud         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

gcc -c -Wall -Wextra -Werror ft_putchar.c
gcc -c -Wall -Wextra -Werror ft_swap.c
gcc -c -Wall -Wextra -Werror ft_putstr.c
gcc -c -Wall -Wextra -Werror ft_strlen.c
gcc -c -Wall -Wextra -Werror ft_strcmp.c

ar rc libft.a ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o
ranlib libft.a
rm *.o
