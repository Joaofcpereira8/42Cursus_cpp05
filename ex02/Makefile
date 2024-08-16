# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jofilipe <jofilipe@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/29 13:09:32 by jofilipe          #+#    #+#              #
#    Updated: 2024/08/13 15:50:48 by jofilipe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RESET   = \033[0m
BLACK   = \033[1;30m
RED     = \033[1;31m
GREEN   = \033[1;32m
YELLOW  = \033[1;33m
BLUE    = \033[1;34m
PURPLE  = \033[1;35m
CYAN    = \033[1;36m
WHITE   = \033[1;37m

NAME = ex02

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -g -std=c++98
RM = rm -rf

SRCS = main.cpp \
		Bureaucrat.cpp \
		Form.cpp \

OBJS = $(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS)
		@$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)
		clear
		echo "   _____ _____  _____   ___  _____   ________   _____  __ ";
		echo "  / ____|  __ \|  __ \ / _ \| ____| |  ____\ \ / / _ \/_ |";
		echo " | |    | |__) | |__) | | | | |__   | |__   \ V / | | || |";
		echo " | |    |  ___/|  ___/| | | |___ \  |  __|   > <| | | || |";
		echo " | |____| |    | |    | |_| |___) | | |____ / . \ |_| || |";
		echo "  \_____|_|    |_|     \___/|____/  |______/_/ \_\___/ |_|";
		echo "                                                          ";
		echo "                                                          ";

clean:
	@$(RM) $(OBJS) $(NAME)

fclean: clean
	@$(RM) $(OBJS) $(NAME)

re: fclean all

.SILENT:
