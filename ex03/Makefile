# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/06 13:54:35 by eburnet           #+#    #+#              #
#    Updated: 2025/02/12 11:30:25 by eburnet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = recap
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = AMateria.cpp ICharacter.cpp Cure.cpp Ice.cpp main.cpp IMateriaSource.cpp
OBJS = $(SRCS:.cpp=.o)
HEADERS = AMateria.hpp ICharacter.hpp Cure.hpp Ice.hpp IMateriaSource.hpp

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
