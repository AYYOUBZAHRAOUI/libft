# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayzahrao <ayzahrao@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/15 19:10:01 by ayzahrao          #+#    #+#              #
#    Updated: 2024/09/19 00:46:59 by ayzahrao         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler and flags
CC = cc
CFLAGS = -Wall -Werror -Wextra

# Directories
INC_DIR = include
SRC_DIR = src
OBJ_DIR = obj

# Source files
# SRC_FILES = src/ft_atoi.c \
# 			src/ft_bzero.c \
# 			src/ft_calloc.c \
# 			src/ft_isalnum.c \
# 			src/ft_isalpha.c \
# 			src/ft_isascii.c \
# 			src/ft_isdigit.c \
# 			src/ft_isprint.c \
# 			src/ft_itoa.c \
# 			src/ft_lstadd_back_bonus.c \
# 			src/ft_lstadd_front_bonus.c \
# 			src/ft_lstclear_bonus.c \
# 			src/ft_lstdelone_bonus.c \
# 			src/ft_lstiter_bonus.c \
# 			src/ft_lstlast_bonus.c \
# 			src/ft_lstmap_bonus.c \
# 			src/ft_lstnew_bonus.c \
# 			src/ft_lstsize_bonus.c \
# 			src/ft_memchr.c \
# 			src/ft_memcmp.c \
# 			src/ft_memcpy.c \
# 			src/ft_memmove.c \
# 			src/ft_memset.c \
# 			src/ft_putchar_fd.c \
# 			src/ft_putendl_fd.c \
# 			src/ft_putnbr_fd.c \
# 			src/ft_putstr_fd.c \
# 			src/ft_split.c \
# 			src/ft_strchr.c \
# 			src/ft_strcmp.c \
# 			src/ft_strdup.c \
# 			src/ft_striteri.c \
# 			src/ft_strjoin.c \
# 			src/ft_strlcat.c \
# 			src/ft_strlcpy.c \
# 			src/ft_strlen.c \
# 			src/ft_strmapi.c \
# 			src/ft_strncmp.c \
# 			src/ft_strnstr.c \
# 			src/ft_strrchr.c \
# 			src/ft_strtrim.c \
# 			src/ft_substr.c \
# 			src/ft_tolower.c \
# 			src/ft_toupper.c \
#			src/ft_get_next_line.c

SRC_FILES = $(wildcard $(SRC_DIR)/*.c)

# Object files
OBJ_FILES = $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRC_FILES))
# patsubst : https://www.gnu.org/software/make/manual/html_node/Text-Functions.html

# Executable name
NAME = libft.a

# Target
all: $(NAME)

# Rule to create the library
$(NAME): $(OBJ_FILES)
	@ar rcs $(NAME) $(OBJ_FILES)
	@echo "libft.a created"

# Rule to create source files into object files
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
# -p : no error if existing, make parent directories as needed
	@$(CC) $(CFLAGS) -I $(INC_DIR) -c $< -o $@
# -I $(INC_DIR) : specify the directory where the header files are located
	
# Clean object files and the library
clean:
	@rm -rf $(OBJ_DIR)
	@echo "Object files have been removed."

# Clean object files and the library
fclean: clean
	@rm -f $(NAME)
	@echo "Executable has been $(NAME) removed."

# rebuild everything
re: fclean all

# .PHONY is a special target that is used to execute the specified commands regardless of the file modification time.
.PHONY: all clean fclean re