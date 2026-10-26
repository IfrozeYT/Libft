# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: doallard <doallard@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/21 17:11:24 by username          #+#    #+#              #
#    Updated: 2026/10/26 19:37:06 by doallard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
RM = rm -rf
CFLAGS = -Wall -Werror -Wextra
NAME = libft.a

SRCS = ft_bzero.c ft_isalpha.c ft_isdigit.c ft_memchr.c ft_memcpy.c ft_memset.c ft_strlcat.c ft_strlen.c ft_strnstr.c ft_tolower.c libft.h ft_atoi.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_memcmp.c ft_memmove.c ft_strchr.c ft_strlcpy.c ft_strncmp.c ft_strrchr.c ft_toupper.c 

LIB_OBJS =  $(SRCS:.c=.o)

BONUS_SRC =

BONUS_OBJS := $(BONUS_SRC:.c=.o)

LIBS_ALL = $(LIB_OBJS) $(BONUS_OBJS)

all: $(NAME)

$(NAME): $(LIB_OBJS)
	ar rcs $(NAME) $(LIB_OBJS)
clean:
	$(RM) $(LIBS_ALL)
fclean: clean
	$(RM) $(NAME)
bonus: $(LIBS_ALL)
	ar rcs $(NAME) $(LIBS_ALL)
re: fclean all

.PHONY: all clean fclean re