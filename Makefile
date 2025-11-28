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
SRCS = ft_strncmp.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_lstnew.c ft_lstsize.c ft_lstadd_front.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
OFILES = $(SRCS:.c=.o)

# Archivo de librería
NAME = libft.a


# Regla para crear una biblioteca dinámica (.o)
$(NAME): $(OFILES)
	ar -crs $(NAME) $(OFILES)

# Regla para crear compilar funciones
%.o: %.c
	$(CC) $(FLAGS) $< -o $@

.PHONY: all clean fclean re

all: $(NAME)

# Borra archivos .o
clean : 
	$(RM) $(OFILES)

# Borra librería creada
fclean : 
	$(RM) $(NAME) $(OFILES)

re : fclean all