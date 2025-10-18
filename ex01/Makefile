# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/18 13:44:32 by aobshatk          #+#    #+#              #
#    Updated: 2025/10/18 17:12:58 by aobshatk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

G = g++
GFLAGS = -std=c++98 -Wall -Werror -Wextra -g 

NAME = serializer

all: $(NAME)

$(NAME):
	 $(G) $(GFLAGS) Serializer.cpp main.cpp -o $(NAME)

clean:
	rm -f serializer

re: clean  all

.PHONY: all clean re