# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksimonov <ksimonov@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/27 08:20:49 by ksimonov          #+#    #+#              #
#    Updated: 2023/08/27 10:20:18 by ksimonov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

FILES = argv_to_stack.c \
		errors.c\
		free_data.c\
		insertion_sort.c\
		launch.c\
		less_five_sort.c\
		main.c\
		parsing.c\
		push_a.c\
		push_b.c\
		radix_sort.c\
		rotate.c\
		sort_three_cases.c\
		swap.c\
		utils.c\
		check_sort.c\

HEADERS = ./push_swap.h\
		  ./libft/libft.h\

OBJ = $(FILES:.c=.o)

FLAGS = -Wall -Wextra -Werror -g

CC = gcc

all: $(NAME)
$(NAME): $(OBJ)
	make -C ./libft all
	$(CC) $(FILES) $(FLAGS) ./libft/libft.a -o push_swap

clean:
	make -C ./libft clean
	rm -rf $(OBJ)

fclean: clean
	make -C ./libft fclean
	rm -rf push_swap
re: fclean all
