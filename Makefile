# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: flbartol <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/16 23:24:06 by flbartol          #+#    #+#              #
#    Updated: 2018/09/16 23:24:51 by flbartol         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C = gcc
NAME = eval_expr
FLAG = -Wall -Werror -Wextra
SRC = main.c utils.c eval_expr.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	gcc $(FLAG) -c $(SRC)
	gcc $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
