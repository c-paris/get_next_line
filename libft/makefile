#**************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cparis <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/13 12:37:57 by cparis            #+#    #+#              #
#    Updated: 2017/01/25 14:40:10 by cparis           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC_PATH = ./
INCLUDES = ./
FLAGS = -Wall -Werror -Wextra
OPTIONS = -c -I $(INCLUDES)
SRC = $(SRC_PATH)ft_putchar.c $(SRC_PATH)ft_putstr.c $(SRC_PATH)ft_strcmp.c \
	  $(SRC_PATH)ft_strdup.c $(SRC_PATH)ft_strlen.c $(SRC_PATH)ft_strcat.c \
	  $(SRC_PATH)ft_strcpy.c $(SRC_PATH)ft_toupper.c $(SRC_PATH)ft_bzero.c \
	  $(SRC_PATH)ft_strdup.c $(SRC_PATH)ft_strncat.c $(SRC_PATH)ft_tolower.c \
	  $(SRC_PATH)ft_strstr.c $(SRC_PATH)ft_strlcat.c $(SRC_PATH)ft_strncmp.c \
	  $(SRC_PATH)ft_memcmp.c $(SRC_PATH)ft_isalnum.c $(SRC_PATH)ft_isdigit.c \
	  $(SRC_PATH)ft_isalpha.c $(SRC_PATH)ft_isascii.c $(SRC_PATH)ft_isprint.c \
	  $(SRC_PATH)ft_memccpy.c $(SRC_PATH)ft_memcpy.c $(SRC_PATH)ft_memcmp.c \
	  $(SRC_PATH)ft_memchr.c $(SRC_PATH)ft_memmove.c $(SRC_PATH)ft_memset.c \
	  $(SRC_PATH)ft_strchr.c $(SRC_PATH)ft_strnstr.c $(SRC_PATH)ft_strncpy.c \
	  $(SRC_PATH)ft_putchar_fd.c $(SRC_PATH)ft_putstr_fd.c \
	  $(SRC_PATH)ft_atoi.c $(SRC_PATH)ft_putnbr.c $(SRC_PATH)ft_memalloc.c \
	  $(SRC_PATH)ft_memdel.c $(SRC_PATH)ft_putendl.c \
	  $(SRC_PATH)ft_putendl_fd.c $(SRC_PATH)ft_putnbr_fd.c \
	  $(SRC_PATH)ft_strnew.c $(SRC_PATH)ft_strclr.c $(SRC_PATH)ft_striter.c \
	  $(SRC_PATH)ft_striteri.c $(SRC_PATH)ft_strrchr.c $(SRC_PATH)ft_strdel.c \
	  $(SRC_PATH)ft_strmap.c $(SRC_PATH)ft_strnequ.c $(SRC_PATH)ft_strsub.c \
	  $(SRC_PATH)ft_strtrim.c $(SRC_PATH)ft_strmapi.c $(SRC_PATH)ft_strequ.c \
	  $(SRC_PATH)ft_strjoin.c $(SRC_PATH)ft_itoa.c $(SRC_PATH)ft_strsplit.c \
	  $(SRC_PATH)ft_lstnew.c $(SRC_PATH)ft_lstadd.c $(SRC_PATH)ft_lstiter.c \
	  $(SRC_PATH)ft_lstmap.c $(SRC_PATH)ft_lstdelone.c $(SRC_PATH)ft_lstdel.c \
	  $(SRC_PATH)ft_strrev.c $(SRC_PATH)ft_sqrt.c $(SRC_PATH)ft_div_mod.c \
	  $(SRC_PATH)ft_lstcopy.c $(SRC_PATH)ft_strjoinch.c

OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strdup.o ft_strlen.o \
	  ft_strcpy.o ft_toupper.o ft_bzero.o ft_strdup.o ft_memcmp.o \
	  ft_strncat.o ft_strstr.o ft_strlcat.o ft_strncmp.o ft_tolower.o \
	  ft_strcat.o ft_isalnum.o ft_isdigit.o ft_isalpha.o ft_isascii.o \
	  ft_isprint.o ft_memccpy.o ft_memcpy.o ft_memcmp.o ft_memchr.o \
	  ft_memmove.o ft_memset.o ft_strchr.o ft_strnstr.o ft_strncpy.o \
	  ft_putstr_fd.o ft_putchar_fd.o ft_atoi.o ft_putnbr.o ft_memdel.o \
	  ft_memalloc.o ft_putendl.o ft_putendl_fd.o ft_putnbr_fd.o \
	  ft_strnew.o ft_strclr.o ft_striter.o ft_striteri.o ft_strrchr.o \
	  ft_strdel.o ft_strmap.o ft_strnequ.o ft_strsub.o ft_strtrim.o \
	  ft_strmapi.o ft_strequ.o ft_strjoin.o ft_strsplit.o ft_itoa.o \
	  ft_lstnew.o ft_lstadd.o ft_lstmap.o ft_lstdelone.o ft_lstdel.o \
	  ft_lstiter.o ft_strrev.o ft_sqrt.o ft_div_mod.o ft_lstcopy.o \
	  ft_strjoinch.o

all: $(NAME)

msg:
	@echo "\033[0;29m⌛  Making Project : \n \c"

$(NAME): msg $(OBJ)
	@gcc $(FLAGS) $(OPTIONS) $(SRC)
	@ar rc $(NAME) $(OBJ)
	@echo "\033[0;34m✅  Executable created !\033[0;29m"
	@echo 'Compilation TERMINE !'

src/%.o: src/%.c $(INCLUDES)
	@gcc $(FLAGS) -o $@ -c $<
	@echo "\033[0;32m.\c\033[0;29m"

clean:
	@echo "\033[0;31m🔥  Cleaning Project Objects...\033[0;29m"
	@/bin/rm -f $(OBJ)
	
fclean: clean
	@echo "\033[0;31m🔥  Cleaning Project Executable...\033[0;29m"
	@/bin/rm -f $(NAME)

re: fclean all
