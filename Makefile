# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mpavoski <mpavoski@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/27 10:26:22 by mpavoski          #+#    #+#              #
#    Updated: 2023/07/27 15:40:54 by mpavoski         ###   ########.fr        #
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
	  ft_memcpy.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SRC)
	ar rc $(NAME) $(OBJ)

#Regra para limpar tds os arquivos objeto	
clean:
	rm -rf $(OBJ)

#Regra para limpar todos os arquivos gerados, incluindo a biblioteca estática
fclean: clean
	rm -f $(NAME)

#Regra para recompilar tudo do zero
re: fclean all
	
	