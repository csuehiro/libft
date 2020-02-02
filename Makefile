# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: csuehiro <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/22 23:25:25 by csuehiro          #+#    #+#              #
#    Updated: 2020/02/02 18:42:25 by csuehiro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a
SRC			=	ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
				ft_isdigit.c ft_isprint.c ft_tolower.c ft_toupper.c \
				ft_strlcpy.c ft_strlcat.c ft_strlen.c ft_strchr.c \
				ft_strrchr.c ft_strncmp.c ft_strnstr.c ft_memset.c \
				ft_strdup.c ft_itoa.c ft_substr.c ft_strjoin.c \
				ft_strtrim.c ft_bzero.c ft_memcpy.c ft_memccpy.c \
				ft_memmove.c ft_memchr.c ft_memcmp.c ft_calloc.c \
				ft_split.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
				ft_putnbr_fd.c ft_strmapi.c 
OBJS		=	$(SRC:.c=.o)
SRC_BONUS	=	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
				ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
				ft_lstmap.c
OBJS_BONUS	=	$(SRC_BONUS:.c=.o)
HEADERS		=	libft.h
RM			=	rm -f
FLAGS		=	-Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -I $(HEADERS) -c $(SRC)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

bonus: all
	gcc $(FLAGS) -I $(HEADERS) -c $(SRC_BONUS)
	ar rc $(NAME) $(OBJS_BONUS)
	ranlib $(NAME)

clean:
	$(RM) $(OBJS) $(OBJS_BONUS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
