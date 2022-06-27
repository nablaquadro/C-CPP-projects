# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aceremig <aceremig@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/28 15:21:43 by aceremig          #+#    #+#              #
#    Updated: 2022/04/28 15:21:44 by aceremig         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC  = gcc
LIBC    = ar rc
CFLAGS  += -Wall -Werror -Wextra

SRC =	ft_printf.c \
		ft_putchar.c \
		putint.c \
		putstr.c \
		putuns.c \
		putptr.c \
		putx.c \
		puthex.c 
OBJS    = $(SRC:.c=.o)

NAME = libftprintf.a

.c.o:
	${CC} ${CFLAGS} -I includes -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
	ar rcs ${NAME} ${OBJS}
	
all: $(NAME)

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f *~ $(NAME)

re: fclean all