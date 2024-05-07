SRCS = ft_isalpha.c ft_isascii.c ft_isprint.c ft_isdigit.c \
       ft_isalnum.c ft_strlen.c ft_toupper.c ft_tolower.c \
	   ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strlcat.c \
	   ft_strlcpy.c	ft_strnstr.c ft_atoi.c ft_memcmp.c ft_memmove.c \
	   ft_memcpy.c ft_memchr.c ft_memset.c ft_bzero.c ft_strdup.c \
	   ft_calloc.c ft_substr.c ft_strjoin.c ft_split.c \
	   ft_itoa.c ft_strmapi.c ft_striteri.c \
		ft_lstnew.c ft_lstadd_front.c ft_lstadd_back.c \
		ft_lstsize.c ft_lstlast.c ft_lstclear.c \
		

CFLAGS = -Wall -Werror -Wextra
CC = cc
OBJS = ${SRCS:.c=.o}
NAME = libft.a
RM = rm -f
LIBC = ar r

all:	${NAME}

${NAME}	:	${OBJS}
		${LIBC} ${NAME} ${OBJS}

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM}	${NAME}

re:	fclean	all

.PHONY:	all	re	clean	fclean