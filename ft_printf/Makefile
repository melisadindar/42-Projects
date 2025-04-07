# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: medindar <medindar@student.42kocaeli.com.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/12 22:08:06 by medindar           #+#    #+#              #
#    Updated: 2023/01/12 22:08:16 by medindar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
FLAG = -Wall -Wextra -Werror
SRC = $(shell find . -name "ft_*.c")

all: $(NAME)

$(NAME):
	@gcc $(FLAG) -c $(SRC)
	@ar rc $(NAME) *.o
	@echo "✅"
clean:
	@/bin/rm -f  *.o *a.out
fclean: clean
	@/bin/rm -f $(NAME)
	@echo "🗑️"

re: fclean all

.PHONY: all bonus clean fclean re