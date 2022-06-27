# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aceremig <aceremig@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/17 16:34:29 by aceremig          #+#    #+#              #
#    Updated: 2022/05/17 16:35:51 by aceremig         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
FLAGS = -Wall -Wextra -Werror 

NAME = push_swap
SRC = main.c utils.c min_max.c order_utils.c order.c sort.c array_utils.c lis.c move_one.c move_two.c move_three.c basic.c

B_NAME = checker
B_SRC =  checker.c check_write.c check_op_one.c check_op_two.c check_op_three.c $(GNL)

LIBFT_A = libft.a
LIBFT_DIR = lib/
LIBFT = $(addprefix $(LIBFT_DIR), $(LIBFT_A))

GNL_DIR = GNL/
GNL_SRC = get_next_line.c get_next_line_utils.c
GNL = $(addprefix $(GNL_DIR), $(GNL_SRC))

OBJ = $(SRC:.c=.o)
B_OBJ	=	$(B_SRC:.c=.o)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	make -C $(LIBFT_DIR)
	$(CC) $(FLAGS) $(OBJ) $(LIBFT) -o $(NAME)

all: $(NAME)

bonus: all $(B_OBJ)
	   @ $(CC) $(FLAGS) -o $(B_NAME) $(B_OBJ) $(LIBFT)

clean:
	rm -rf $(OBJ) $(B_OBJ)
	make clean -C $(LIBFT_DIR)

fclean: clean
	rm -f $(NAME) $(B_NAME)
	make fclean -C $(LIBFT_DIR)

re: fclean all
