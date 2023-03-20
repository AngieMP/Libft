# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: angmedin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/14 16:55:53 by angmedin          #+#    #+#              #
#    Updated: 2023/03/20 17:37:05 by angmedin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_isalpha.c ft_itoa.c ft_memmove.c ft_strlcpy.c	ft_strrchr.c\
	   ft_bzero.c ft_isascii.c	ft_memchr.c	ft_memset.c	ft_strlen.c	ft_tolower.c\
	   ft_calloc.c	ft_isdigit.c ft_memcmp.c ft_strchr.c ft_strncmp.c ft_toupper.c\
	   ft_isalnum.c ft_isprint.c ft_memcpy.c ft_strlcat.c ft_strnstr.c ft_atoi.c\
	   ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c

OBJS = $(SRCS:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror -I.
RM = rm -f
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

#%.o:. %.c
#	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean all
