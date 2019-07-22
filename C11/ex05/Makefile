# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrouabeh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/22 09:24:44 by mrouabeh          #+#    #+#              #
#    Updated: 2019/07/22 11:37:05 by mrouabeh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

SRCS = ./srcs/main.c ./srcs/do_op.c ./srcs/operators.c ./srcs/utile.c
OBJS = $(SRCS:.c=.o)
INCLUDES = ./includes/

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	gcc -o $(NAME) $(OBJS)
.c.o:
	gcc $(FLAGS) -I $(INCLUDES) -c $< -o $(<:.c=.o)
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re
