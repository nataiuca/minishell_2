# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: natferna <natferna@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/28 19:00:31 by natferna          #+#    #+#              #
#    Updated: 2024/12/28 21:54:03 by natferna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a

CC = gcc

SRC = ft_atoi.c ft_bzero.c ft_isalnum.c \
      ft_isalpha.c ft_isascii.c ft_isdigit.c \
      ft_isprint.c ft_itoa.c ft_memchr.c \
      ft_memcmp.c ft_memcpy.c ft_memmove.c \
      ft_memset.c ft_putchar_fd.c ft_putendl_fd.c \
	  ft_putnbr_fd.c ft_putstr_fd.c ft_split.c \
	  ft_strchr.c ft_striteri.c ft_strjoin.c \
	  ft_strlcat.c ft_strlcpy.c ft_strlen.c \
	  ft_strmapi.c ft_strncmp.c ft_strnstr.c \
	  ft_strrchr.c ft_strtrim.c ft_substr.c \
	  ft_tolower.c ft_toupper.c ft_calloc.c \
	  ft_strdup.c ft_printf.c ft_handle_hex.c ft_handle_ptr.c ft_handle_unsigned.c \
       ft_handle_char.c ft_handle_int.c ft_handle_str.c

BONUS_SRC = ft_lstadd_back_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c \
      ft_lstadd_front_bonus.c ft_lstclear_bonus.c ft_lstdelone_bonus.c \
      ft_lstiter_bonus.c ft_lstlast_bonus.c ft_lstmap_bonus.c \

OBJ = $(SRC:.c=.o)
BONUS_OBJ = $(BONUS_SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) $(BONUS_OBJ) 
	@ar rc $(NAME) $(OBJ) $(BONUS_OBJ)
	@ranlib $(NAME)
	@echo "$(NAME) created and indexed"

%.o: %.c
	$(CC) $(FLAG) -c $< -o $@

bonus: $(NAME) 
	@echo "$(NAME) with bonus created and indexed"

clean:
	@rm -f $(OBJ) $(BONUS_OBJ)
	@echo "OBJ and BONUS_OBJ deleted"

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) deleted"

re: fclean all

.PHONY: all clean fclean re bonus
