CFLAGS = -Wall -Werror -Wextra
CC = cc
SRC_FILES = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c\
	ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c\
	ft_memset.c ft_strchr.c ft_strncmp.c ft_strlcat.c ft_strlcpy.c ft_strlen.c\
	ft_strnstr.c ft_strrchr.c ft_toulower.c ft_toupper.c ft_calloc.c ft_strdup.c\
	ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c\
	ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
bonus_file = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
	ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
	ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c
OBJ_FILES = $(SRC_FILES:.c=.o)
bonus_file_o = $(bonus_file:.c=.o)
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJ_FILES)
	ar rcs $(NAME) $(OBJ_FILES)

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_FILES)

fclean: clean
	rm -rf $(NAME) $(bonus_file_o)

re: fclean all

bonus: $(bonus_file_o)
	ar rcs $(NAME) $(bonus_file_o)

.PHONY: all clean fclean re