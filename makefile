CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = push_swap

LIBFT = srcs/libft/

LIBFT_NAME = srcs/libft/libft.a

FILES =  parsing_tools.c parsing_tools2.c \
		moves/push_node.c moves/rotate_node.c moves/swap_node.c \
		sorting/sort_3.c sorting/sort_4.c sorting/sort_5.c push_swap.c test.c main.c \

O_FILES = $(FILES:.c=.o)

$(NAME) : $(O_FILES)
		make -C	$(LIBFT)
		$(CC) $(CFLAGS) $? $(LIBFT_NAME) -o $@

all : $(NAME)

clean :
		make clean -C $(LIBFT)
		rm -rf $(O_FILES)

fclean : clean
		make fclean -C $(LIBFT)
		rm -f $(NAME)

re : fclean all

.PHONY : clean fclean