# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmelero- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/09 19:14:31 by cmelero-          #+#    #+#              #
#    Updated: 2026/01/12 18:45:37 by cmelero-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAG = -Wall -Wextra -Werror

HEADER = Makefile libft.h
SRC = ft_atoi.c \
      ft_bzero.c \
      ft_calloc.c \
      ft_isalnum.c \
      ft_isalpha.c \
      ft_isascii.c \
      ft_isdigit.c \
      ft_isprint.c \
      ft_itoa.c \
      ft_memchr.c \
      ft_memcmp.c \
      ft_memcpy.c \
      ft_memmove.c \
      ft_memset.c \
      ft_strchr.c \
      ft_strlcat.c \
      ft_strlcpy.c \
      ft_strlen.c \
      ft_strncmp.c \
      ft_strnstr.c \
      ft_strrchr.c \
      ft_tolower.c \
      ft_toupper.c \
      ft_strdup.c \
      ft_substr.c \
      ft_strjoin.c \
      ft_strtrim.c \
      ft_split.c \
      ft_strmapi.c \
      ft_striteri.c \
      ft_putchar_fd.c \
      ft_putstr_fd.c \
      ft_putendl_fd.c \
      ft_putnbr_fd.c \
      ft_lstnew.c \
      ft_lstadd_front.c \
      ft_lstsize.c \
      ft_lstlast.c \
      ft_lstadd_back.c \
      ft_lstdelone.c \
      ft_lstclear.c \
      ft_lstiter.c \
      ft_lstmap.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

bonus: $(NAME)

$(NAME): $(OBJ)
	@ar -rcs $(NAME) $(OBJ) || { @echo "Error creating $(NAME) $(OBJ)"; exit 1; }	
	@echo "$(NAME) created" 

%.o: %.c $(HEADER)
	cc $(FLAG) -c $< -o $@

bonus: $(NAME)

clean:
	@rm -f $(OBJ) || { @echo "Error removing $(OBJ)"; exit 1; }
	@echo "OBJ removed"

fclean: clean
	@rm -f $(NAME) || { @echo "Error removing $(NAME)"; exit 1; }
	@echo "$(NAME) removed"

re: fclean all

.PHONY: all clean fclean re bonus
