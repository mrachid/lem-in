# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrachid <mrachid@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/02/13 20:41:08 by mrachid           #+#    #+#              #
#    Updated: 2014/02/13 20:59:31 by mrachid          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = lem-in

OBJS = $(SRC:.c=.o)

FLAG = -Wall -Werror -Wextra

ICLD = -I libft/includes

SRC = main.c

.PHONY: all clean fclean re

all: $(NAME)

$(NAME):
	@make -C libft/
	@cc $(FLAG) $(ICLD) -c $(SRC) -g
	@cc -o $(NAME) $(OBJS) -L libft -lft

clean:
	@make -C libft/ clean
	@rm -rf $(OBJS)

fclean: clean
	@make -C libft/ fclean
	@rm -rf $(NAME)

re : fclean all
