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

HEADERS = ./push_swap.h\
		  ./libft/libft.h\

OBJ = $(FILES:.c=.o)

FLAGS = -Wall -Wextra -Werror -g

CC = gcc

all: $(NAME)
$(NAME): $(OBJ)
	make -C ./libft all
	$(CC) -g $(FILES) $(FLAGS) ./libft/libft.a -o push_swap

clean:
	make -C ./libft clean
	rm -rf $(OBJ)

fclean: clean
	make -C ./libft fclean
	rm -rf push_swap
re: fclean all

.PHONY: all clean fclean re