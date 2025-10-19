# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/18 13:44:32 by aobshatk          #+#    #+#              #
#    Updated: 2025/10/19 17:53:23 by aobshatk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

G = g++
GFLAGS = -std=c++98 -Wall -Werror -Wextra -g 

NAME = type

all: $(NAME)

$(NAME):
	$(G) $(GFLAGS) Base.cpp Serializer.cpp main.cpp -o $(NAME)

clean:
	rm -f type

re: clean  all

.PHONY: all clean re