# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: svilau <svilau@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/03 15:43:25 by svilau            #+#    #+#              #
#    Updated: 2016/01/19 16:32:20 by svilau           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = ./srcs/main.c

HEADERS = ./includes/ft_funct.h ./includes/libft.a

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): 
	@ gcc $(FLAGS) $(SRC) $(HEADERS)
	@ mv a.out $(NAME)

clean:
	@ /bin/rm -f $(OFILES)

fclean: clean
	@ /bin/rm -f $(NAME)

re: fclean all
