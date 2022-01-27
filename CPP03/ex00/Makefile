# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hyerkim <hyerkim@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/26 14:39:29 by hyerkim           #+#    #+#              #
#    Updated: 2022/01/26 14:39:30 by hyerkim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



NAME		=	ClapTrap
CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror

SRC			=	main.cpp \
				ClapTrap.cpp

RM			=	rm -rf

OBJ			=	$(SRC:.cpp=.o)

%.o			:	%.cpp
				$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME)		:	$(OBJ)
				$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

all			:	$(NAME)

clean		:
				$(RM) $(OBJ)

fclean		:	clean
				$(RM) $(NAME)

re			:	fclean all

.PHONY		:	all clean fclean re