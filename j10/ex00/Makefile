# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: svilau <svilau@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/03 15:43:25 by svilau            #+#    #+#              #
#    Updated: 2015/11/06 11:26:57 by svilau           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c

OFILES = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

HEADERS = ./includes/ft.h

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OFILES)
	@ ar rc $(NAME) $(OFILES) $(HEADERS)

$(OFILES): 
	@ gcc -c $(FLAGS) $(SRC)

clean:
	@ /bin/rm -f $(OFILES)

fclean: clean
	@ /bin/rm -f $(NAME)

re: fclean all
