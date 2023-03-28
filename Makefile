# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: angmedin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/14 16:55:53 by angmedin          #+#    #+#              #
#    Updated: 2023/03/28 12:53:05 by angmedin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_isalpha.c ft_itoa.c ft_memmove.c ft_strlcpy.c	ft_strrchr.c\
	   ft_bzero.c ft_isascii.c	ft_memchr.c	ft_memset.c	ft_strlen.c	ft_tolower.c\
	   ft_calloc.c	ft_isdigit.c ft_memcmp.c ft_strchr.c ft_strncmp.c ft_toupper.c\
	   ft_isalnum.c ft_isprint.c ft_memcpy.c ft_strlcat.c ft_strnstr.c ft_atoi.c\
	   ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_strmapi.c\
	   ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\
	   
BONUSSRCS = ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstnew.c\
			ft_lstdelone.c ft_lstclear.c

OBJS = $(SRCS:.c=.o)
BONUSOBJS = $(BONUSSRCS:.c=.o) 
CC = cc
CFLAGS = -Wall -Wextra -Werror -I.
RM = rm -f
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

bonus: $(OBJS) $(BONUSOBJS)
	ar rcs $(NAME) $(OBJS) $(BONUSOBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS) $(BONUSOBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

rebonus: fclean bonus

.PHONY: clean fclean all
