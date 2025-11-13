# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#   By: mabravo- <mabravo-@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/10 15:58:07 by mabravo-          #+#    #+#              #
#    Updated: 2025/11/10 15:58:12 by mabravo-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Reglas de compilación
CC = cc
FLAGS = -Wall -Werror -Wextra -c

RM = /bin/rm -f

# Nombre de funciones a compilar y crear archivos .o de .c
SRCS = ft_isalpha.c
OFILES = $(SRCS:.c=.o)

# Archivo de librería
NAME = libft.a


# Regla para crear una biblioteca dinámica (.o)
$(NAME): $(OFILES)
	ar -crs $(NAME) $(OFILES)

# Regla para crear compilar funciones
%.o: %.c
	$(CC) $(FLAGS) $< -o $@

.PHONY : clean fclean all re

all : executable

# Borra archivos .o
clean : 
	$(RM) $(OFILES)

# Borra librería creada
fclean : 
	$(RM) $(NAME)

re : fclean $(NAME)