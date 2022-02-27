NAME = libft.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

B_SRC = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c
OBJ = $(SRC:.c=.o)

B_OBJ = $(B_SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	ar -rcs $(NAME) $(OBJ)

bonus : $(OBJ) $(B_OBJ)
	ar -rcs $(NAME) $(OBJ) $(B_OBJ)

re : fclean all

clean :
	rm -f $(OBJ) $(B_OBJ)

fclean : clean
	rm -f $(NAME)

.PHONY : all bonus clean fclean re
