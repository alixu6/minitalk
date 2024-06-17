# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: axu <axu@student.42luxembourg.lu>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/12 14:18:52 by axu               #+#    #+#              #
#    Updated: 2024/03/15 09:17:22 by axu              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SOURCES = ft_printf.c ft_print_char.c ft_print_str.c ft_print_ptr.c ft_print_nbr.c \
	  ft_print_unsigned.c ft_print_hex.c ft_print_percent.c \

OBJECTS = $(SOURCES:.c=.o)

CC = cc

CFLAGS = -Wall -Werror -Wextra

LIBFT_PATH = ./libft

LIBFT = $(LIBFT_PATH)/libft.a

LIBFT_DEST_DIR = .

all: $(NAME)

$(NAME): $(OBJECTS) $(LIBFT)
	cp $(LIBFT) $(LIBFT_DEST_DIR)
	mv libft.a $(NAME)
	ar rcs $(NAME) $(OBJECTS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):
	@$(MAKE) -C $(LIBFT_PATH)

clean:
	rm -f $(OBJECTS)
	@$(MAKE) -C $(LIBFT_PATH) clean

fclean: clean
	rm -f $(NAME)
	@$(MAKE) -C $(LIBFT_PATH) fclean
	rm -f $(LIBFT_DEST_DIR)/libft.a

re: fclean all
