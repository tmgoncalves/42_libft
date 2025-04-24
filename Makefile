# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmarinho <tmarinho@student.42.sp>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/11 13:00:33 by tmarinho          #+#    #+#              #
#    Updated: 2025/04/23 21:31:59 by tmarinho         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

SRC	= $(wildcard *.c) 

OBJS	= $(SRC:.c=.o)

COMPILE	= gcc

CFLAGS	= -Wall -Wextra -Werror

REMOVE	= rm -f

$(NAME)	:	$(OBJS)
		ar rc $(NAME) $(OBJS)
		ranlib $(NAME)

all:	$(NAME)

.c.o:
	$(COMPILE) $(CFLAGS) -c $< -o $@

clean:
	$(REMOVE) $(OBJS)

fclean:
	$(REMOVE) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
