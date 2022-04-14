# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nguiard <nguiard@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/14 11:00:15 by nguiard           #+#    #+#              #
#    Updated: 2022/04/14 11:51:12 by nguiard          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SHELL:= /bin/zsh

SRC = megaphone.cpp \

CC = g++

OBJ = ${SRC:.cpp=.o}

NAME = megaphone

FLAGS = -Wall -Werror -Wextra -std=c++98

.cpp.o:
	${CC} ${FLAGS} -c $< -o ${<:.cpp=.o}

${NAME}: ${OBJ}
	${CC} ${OBJ} ${FLAGS} -o ${NAME}

all: ${NAME}

clean:
	rm -rf ${OBJ}

fclean:
	rm -rf ${OBJ} ${NAME}

re: fclean all

.PHONY: all fclean clean re