# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/06 13:54:35 by eburnet           #+#    #+#              #
#    Updated: 2025/02/06 13:56:44 by eburnet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = recap
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = AMateria.cpp Character.cpp Cure.cpp Ice.cpp main.c
OBJS = $(SRCS:.cpp=.o)
HEADERS = AMateria.hpp Character.hpp Cure.hpp Ice.hpp 

all: $(NAME)

$(NAME): $(OBJS) $(HEADERS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp $(HEADERS)
	$(CC) $(FLAGS) -c $< -o $(<:.cpp=.o)
	
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
