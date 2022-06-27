# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aceremig <aceremig@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/30 16:50:21 by aceremig          #+#    #+#              #
#    Updated: 2022/05/30 16:51:36 by aceremig         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	libftprintf.a
SRCS =	 *.c
OBJS =	$(SRCS:.c=.o)
HDRS =	ft_printf.h
FLAGS =	-Wall -Wextra -Werror

$(NAME):
		gcc -c -I $(FLAGS) $(SRCS)
		ar rc $(NAME) $(OBJS)
		ranlib $(NAME)

bonus: all

all: 	$(NAME)

clean:	
		rm -f $(OBJS)
	
fclean:	clean
		rm -f $(NAME)
	
re:		fclean all

.PHONY: all clean fclean re
