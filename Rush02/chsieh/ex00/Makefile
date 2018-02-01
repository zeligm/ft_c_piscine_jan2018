# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cgunkel <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/27 01:28:11 by cgunkel           #+#    #+#              #
#    Updated: 2018/01/27 19:43:36 by cgunkel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Name of the program
NAME = rush-2

# Source .c file(s) path
SRCS = ./srcs/*.c

# Source .h file(s) path
HEAD = ./includes 

# Compiler used
COMP = gcc

# Compiler flags used on creation of objects. 
# -c Compiles without linking files into objects
FLAG = -c -Wall -Werror -Wextra -I$(HEAD)

# Move object files into their Directory
MOBF = mv ./*.o ./objs/

# Object file(s) path
OBJP = ./objs/*.o

# Removal path/flags
RMFL = /bin/rm -f

# make command to compile
all: $(NAME)

# Silently generate object files for (CURRENT: bsq)
$(NAME):
	@$(COMP) $(FLAG) $(SRCS)
	@$(MOBF)
	@$(COMP) $(OBJP) -o $(NAME)

# Remove object files
clean:
	@$(RMFL) $(OBJP)

# Remove compiled program(s) and object(s)
fclean: clean
	@$(RMFL) $(NAME)

# Remove all non source files and recompile
re: fclean all
