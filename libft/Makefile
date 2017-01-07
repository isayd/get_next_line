# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: igallego <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/10/31 23:38:39 by igallego          #+#    #+#              #
#    Updated: 2016/11/12 17:51:50 by igallego         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC  =	ft_memset.c ft_bzero.c ft_memccpy.c ft_memcpy.c ft_memmove.c \
		ft_memchr.c ft_memcmp.c ft_strcpy.c ft_strdup.c ft_strlen.c \
		ft_strcat.c ft_strchr.c ft_strlcat.c ft_strncat.c ft_strncpy.c \
		ft_atoi.c ft_isalpha.c ft_strcmp.c ft_strncmp.c ft_strnstr.c \
		ft_strrchr.c ft_strstr.c ft_isalnum.c ft_isascii.c ft_isdigit.c \
		ft_isprint.c ft_tolower.c ft_toupper.c ft_memalloc.c ft_memdel.c \
		ft_strclr.c ft_strdel.c ft_strnew.c ft_striter.c ft_striteri.c \
		ft_strmap.c ft_strmapi.c ft_strequ.c ft_strjoin.c ft_strnequ.c \
		ft_strsub.c ft_itoa.c ft_putchar.c ft_putstr.c ft_strsplit.c \
		ft_strtrim.c ft_putchar_fd.c ft_putendl_fd.c ft_putendl.c \
		ft_putnbr_fd.c ft_putnbr.c ft_putstr_fd.c ft_lstadd.c ft_lstdel.c \
		ft_lstdelone.c ft_lstiter.c ft_lstmap.c ft_lstnew.c ft_charcount.c \
		ft_sccount.c ft_swap.c ft_strtoupper.c ft_strtolower.c

OBJECTS =	ft_atoi.o ft_bzero.o ft_charcount.o ft_isalnum.o ft_isalpha.o \
			ft_isascii.o ft_isdigit.o ft_isprint.o ft_itoa.o ft_lstadd.o \
			ft_lstdel.o ft_lstdelone.o ft_lstiter.o ft_lstmap.o ft_lstnew.o \
			ft_memalloc.o ft_memccpy.o ft_memchr.o ft_memcmp.o ft_memcpy.o \
			ft_memdel.o ft_memmove.o ft_memset.o ft_putchar_fd.o ft_putchar.o \
			ft_putendl_fd.o ft_putendl.o ft_putnbr_fd.o ft_putnbr.o \
			ft_putstr_fd.o ft_putstr.o ft_sccount.o ft_strcat.o ft_strchr.o \
			ft_strclr.o ft_strcmp.o ft_strcpy.o ft_strdel.o ft_strdup.o \
			ft_strequ.o ft_striter.o ft_striteri.o ft_strjoin.o ft_strlcat.o \
			ft_strlen.o ft_strmap.o ft_strmapi.o ft_strncat.o ft_strncmp.o \
			ft_strncpy.o ft_strnequ.o ft_strnew.o ft_strnstr.o ft_strrchr.o \
			ft_strsplit.o ft_strstr.o ft_strsub.o ft_strtolower.o \
			ft_strtoupper.o ft_strtrim.o ft_swap.o ft_tolower.o ft_toupper.o

INC		= -I./includes

all: $(NAME)

$(NAME):
	gcc -c -Wall -Werror -Werror -Wextra $(SRC) $(INC)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
