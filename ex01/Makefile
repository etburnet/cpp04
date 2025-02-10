# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/03 11:48:21 by eburnet           #+#    #+#              #
#    Updated: 2025/02/10 13:42:48 by eburnet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animal
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98 -g3
SRCS = Animal.cpp Cat.cpp Dog.cpp main.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp
OBJS = $(SRCS:.cpp=.o)
HEADERS = Dog.hpp Cat.hpp Animal.hpp WrongCat.hpp WrongAnimal.hpp Brain.hpp

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