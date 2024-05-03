CC = cc

CFLAGS = -Wall -Wextra -Werror #-fsanitize=address

NAME = push_swap

BONUS_NAME = checker

LIBFT = srcs/libft/

LIBFT_NAME = srcs/libft/libft.a

FILES =  parsing_tools.c parsing_tools2.c indexing.c \
		moves/push_node.c moves/rotate_node.c moves/swap_node.c \
		sorting/sort_3.c sorting/sort_4.c sorting/sort_5.c sorting/sort_nums.c push_swap.c test.c main.c \

FILES_BONUS	=	bonus/checker.c bonus/tools_bonus.c bonus/get_next_line.c \
				bonus/get_next_line_utils.c parsing_tools.c parsing_tools2.c \
				moves/rotate_node.c moves/push_node.c moves/swap_node.c

O_FILES = $(FILES:.c=.o)

O_FILES_B = $(FILES_BONUS:.c=.o)

$(NAME) : $(O_FILES)
		make -C	$(LIBFT)
		$(CC) $(CFLAGS) $? $(LIBFT_NAME) -o $@

all : $(NAME)

$(BONUS_NAME) : $(O_FILES_B)
		make -C $(LIBFT)
		$(CC) $(CFLAGS) $? $(LIBFT_NAME) -o $@

bonus : $(BONUS_NAME)

clean :
		make clean -C $(LIBFT)
		rm -rf $(O_FILES) $(O_FILES_B)

fclean : clean
		make fclean -C $(LIBFT)
		rm -f $(NAME) $(BONUS_NAME)

re : fclean all bonus

.PHONY : clean fclean