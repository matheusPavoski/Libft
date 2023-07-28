# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mpavoski <mpavoski@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/27 10:26:22 by mpavoski          #+#    #+#              #
#    Updated: 2023/07/28 15:36:52 by mpavoski         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a 

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_isalpha.c\
      ft_isdigit.c\
	  ft_isalnum.c\
	  ft_isascii.c\
	  ft_isprint.c\
	  ft_strlen.c\
	  ft_memset.c\
	  ft_bzero.c\
	  ft_memcpy.c\
	  ft_memmove.c\
	  ft_strlcpy.c\
	  ft_strlcat.c\
	  ft_toupper.c\
	  ft_tolower.c
	  

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SRC)
	ar rc $(NAME) $(OBJ)
	
clean:
	rm -rf $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
	
	