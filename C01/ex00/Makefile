# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vchevill <vchevill@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/06 11:38:44 by vchevill          #+#    #+#              #
#    Updated: 2022/05/06 16:30:07 by vchevill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	zombie
SRCS	=	srcs/Zombie.cpp srcs/main.cpp
HEADER  =   includes
CC		=	c++
CFLAGS	=	-std=c++98 -Wall -Wextra -Werror
OBJS	=	$(SRCS:.cpp=.o)

LFLAGS  =   -I $(HEADER)

%.o:		%.cpp $(HEADER)/Zombie.h
	$(CC) $(CFLAGS) $(LFLAGS) -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re : fclean all

.PHONY: all fclean clean re