# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/18 13:44:32 by aobshatk          #+#    #+#              #
#    Updated: 2025/10/18 14:28:10 by aobshatk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

G = g++
GFLAGS = -std=c++98 -Wall -Werror -Wextra -g 

NAME = converter

all: $(NAME)

$(NAME):
	$(G) $(GFLAGS) ScalarConverter.cpp main.cpp -o $(NAME)

clean:
	rm -f converter

re: clean  all

.PHONY: all clean re