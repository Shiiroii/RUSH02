# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: liulm <liulm@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/03 10:30:47 by liulm             #+#    #+#              #
#    Updated: 2024/08/04 16:47:08 by liulm            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		rush-02.a

CC =		cc

RUSH =		rush-02

CFLAGS =	-Wall -Wextra -Werror

RM =		rm -f

HEADER =	includes/rush02.h

SRCS =		srcs/launch.c		\
			srcs/open_dict.c	\
			srcs/rush02.c		\
			srcs/thousands.c	\
			srcs/utils.c		\
			srcs/ten.c			\


OBJS =		$(SRCS:.c=.o)

$(NAME): $(OBJS)

			$(CC) $(CFLAGS) $(OBJS) -o $(RUSH)

all: $(NAME)

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY: all clean fclean re
