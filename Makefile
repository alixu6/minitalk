NAME = client server

SOURCES = client.c server.c 

OBJECTS = $(SOURCES:.c=.o)

CC = cc

CFLAGS = -Wall -Werror -Wextra

LIBFT_PATH = ./ft_printf

LIBFT = $(LIBFT_PATH)/libftprintf.a

all:	$(NAME)

client:	client.o $(LIBFT)
	$(CC)	$(CFLAGS)	-o client client.o -L$(LIBFT_PATH) -lftprintf

server:	server.o $(LIBFT)
	$(CC)	$(CFLAGS)	-o server server.o -L$(LIBFT_PATH) -lftprintf

%.o:	%.c
	$(CC)	$(CFLAGS)	-c $< -o $@

$(LIBFT):
	$(MAKE)	-C $(LIBFT_PATH)

clean:
	rm -f $(OBJECTS)
	$(MAKE) -C $(LIBFT_PATH) clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C $(LIBFT_PATH) fclean

re:	fclean all
