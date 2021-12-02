# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: erainbow <erainbow@student.21-school.ru    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/12 09:27:34 by erainbow          #+#    #+#              #
#    Updated: 2021/11/12 09:27:34 by erainbow         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

LIST = 	ft_isalpha.c	ft_isdigit.c	ft_isalnum.c\
		ft_isascii.c	ft_isprint.c	ft_strlen.c\
		ft_memset.c	ft_bzero.c	ft_memmove.c\
		ft_strlcpy.c	ft_strlcat.c	ft_toupper.c\
		ft_tolower.c	ft_strrchr.c	ft_strncmp.c\
		ft_memchr.c	ft_memcpy.c	ft_memcmp.c\
		ft_strnstr.c	ft_atoi.c	ft_calloc.c\
		ft_strdup.c	ft_substr.c	ft_strjoin.c\
		ft_strtrim.c	ft_split.c	ft_itoa.c\
		ft_strmapi.c	ft_striteri.c	ft_putchar_fd.c\
		ft_putstr_fd.c	ft_putendl_fd.c	ft_putnbr_fd.c\
		ft_strchr.c

OBJ = $(patsubst %.c,%.o,$(LIST))

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME) : $(OBJ)	
		ar rcs $(NAME) $?

%.o : %.c libft.h
	gcc $(FLAGS) -c $< -o $@

clean:
		rm -rf $(OBJ)

fclean: clean
		rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re