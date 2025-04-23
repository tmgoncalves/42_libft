# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmarinho <tmarinho@student.42.sp>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/11 13:00:33 by tmarinho          #+#    #+#              #
#    Updated: 2025/04/23 20:41:57 by tmarinho         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

SRC	= ft_isalnum.c 

OBJS	= $(SRC:.c=.o)

COMPILE	= gcc

CFLAGS	= -Wall -Wextra -Werror

REMOVE	= rm -f

$(NAME)	:	$(OBJS)
		ar rc $(NAME) $(OBJS)
		ranlib ($NAME)

all:	$(NAME)

.c.o:
	$(COMPILE) $(CFLAGS) -c $< -o $(OBJS)

clean:
	$(REMOVE) $(OBJS)

fclean:
	$(REMOVE) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
