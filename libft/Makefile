# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksimonov <ksimonov@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/08 03:54:36 by ksimonov          #+#    #+#              #
#    Updated: 2023/08/08 03:54:37 by ksimonov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC =	ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_strlen.c\
		ft_strchr.c ft_toupper.c ft_tolower.c ft_strrchr.c ft_atoi.c ft_memset.c\
		ft_bzero.c ft_memcpy.c ft_memmove.c ft_memcmp.c ft_memchr.c ft_strncmp.c \
		ft_strlcpy.c ft_strlcat.c ft_strnstr.c ft_strdup.c ft_calloc.c ft_putchar_fd.c\
		ft_putstr_fd.c ft_putnbr_fd.c ft_substr.c ft_putendl_fd.c ft_striteri.c\
		ft_strmapi.c ft_strjoin.c ft_itoa.c ft_strtrim.c ft_split.c \
		get_next_line_utils.c get_next_line.c \

OBJ = $(SRC:.c=.o)

BONUS =	ft_lstsize.c ft_lstlast.c ft_lstadd_front.c ft_lstadd_back.c ft_lstdelone.c\
	ft_lstclear.c ft_lstnew.c ft_lstiter.c ft_lstmap.c\

OBJB = $(BONUS:.c=.o)

CC = gcc

CFLAGS = -Wall -Werror -Wextra

AR = ar -rcs

RM = rm -f

CL = clean

CLA = fclean all

all: $(NAME)

$(NAME): $(OBJ)
	@$(AR) $(NAME) $(OBJ)

bonus: $(OBJ) $(OBJB) 
	@$(AR) $(NAME) $(OBJ) $(OBJB)

clean:
	@$(RM) $(OBJ) $(OBJB)

fclean: $(CL)
	@$(RM) $(NAME) 

re: $(CLA)

.PHONY: all clean fclean re bonus
