# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/18 13:44:32 by aobshatk          #+#    #+#              #
#    Updated: 2025/10/21 13:09:13 by aobshatk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

G = g++
GFLAGS = -std=c++98 -Wall -Werror -Wextra -g 

NAME = type

all: $(NAME)

$(NAME):
	$(G) $(GFLAGS) Base.cpp main.cpp -o $(NAME)

clean:
	rm -f type

re: clean  all

.PHONY: all clean re