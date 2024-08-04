# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: liulm <liulm@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/03 10:30:47 by liulm             #+#    #+#              #
#    Updated: 2024/08/04 12:47:54 by liulm            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		rush-02

CC =		cc

CFLAGS =	-Wall -Wextra -Werror

RM =		rm -f

HEADER =	includes/rush02.h

SRCS =		srcs/main.c			\
			srcs/open_dict.c	\
			srcs/rush02.c		\
			srcs/thousands.c	\
			srcs/utils.c		\
			srcs/ten.c			\


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
