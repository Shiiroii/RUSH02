# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: liulm <liulm@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/03 10:30:47 by liulm             #+#    #+#              #
#    Updated: 2024/08/03 12:03:38 by liulm            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		rush02.a

CC =		cc

CFLAGS =	-Wall -Wextra -Werror

RM =		rm -f

HEADER =	includes/rush02.h

SRCS =		srcs		\

OBJS =		${SRCS:.c=.o}

.c.o:		${CC} ${CFLAGS} - I includes -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
			ar rcs ${NAME} ${OBJS}

all: ${NAME}

clean:
			rm -f ${OBJS}

fclean: clean
			rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
