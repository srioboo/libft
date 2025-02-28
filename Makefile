# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: srioboo- <srioboo-@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/30 16:30:18 by srioboo-          #+#    #+#              #
#    Updated: 2025/02/28 12:29:29 by srioboo-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# library name
NAME = libft.a
# compliler and compiler flags
CC = @cc
CFLAGS = -Wall -Wextra -Werror
# auxiliary commands
AR = @ar rcs
RM = @rm -f

# source files
SRCS = src/ft_atoi.c \
		src/ft_bzero.c \
		src/ft_calloc.c \
		src/ft_isalnum.c \
		src/ft_isalpha.c \
		src/ft_isascii.c \
		src/ft_isdigit.c \
		src/ft_isprint.c \
		src/ft_itoa.c \
		src/ft_memchr.c \
		src/ft_memcmp.c \
		src/ft_memcpy.c \
		src/ft_memmove.c \
		src/ft_memset.c \
		src/ft_putchar_fd.c \
		src/ft_putendl_fd.c \
		src/ft_putnbr_fd.c \
		src/ft_putstr_fd.c \
		src/ft_split.c \
		src/ft_strchr.c \
		src/ft_strdup.c \
		src/ft_striteri.c \
		src/ft_strjoin.c \
		src/ft_strlcat.c \
		src/ft_strlcpy.c \
		src/ft_strlen.c \
		src/ft_strmapi.c \
		src/ft_strncmp.c \
		src/ft_strnstr.c \
		src/ft_strrchr.c \
		src/ft_strtrim.c \
		src/ft_substr.c \
		src/ft_tolower.c \
		src/ft_toupper.c

# source files bonus
BONUS_SRCS = src/ft_lstadd_back_bonus.c \
		src/ft_lstadd_front_bonus.c \
		src/ft_lstclear_bonus.c \
		src/ft_lstdelone_bonus.c \
		src/ft_lstiter_bonus.c \
		src/ft_lstlast_bonus.c \
		src/ft_lstmap_bonus.c \
		src/ft_lstnew_bonus.c \
		src/ft_lstsize_bonus.c

# objects
OBJECTS = $(SRCS:.c=.o)
BONUS_OBJECTS = $(BONUS_SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) $(NAME) $(OBJECTS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

bonus: $(OBJECTS) $(BONUS_OBJECTS)
	$(AR) $(NAME) $?

clean:
	$(RM) $(OBJECTS) $(BONUS_OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

# TEST Section
# INCLUDE = include
# LIB = lib
# # Library name
# LIB_TEST_NAME = libfuntest.a

# ## Name of the test main executable
# TEST_BIN = test.out

# ## Library Test source and objects
# TEST_SRCS = $(wildcard src-tests/*.c)
# TEST_OBJS = $(TEST_SRCS:.c=.o)

# Test: generate test binary
# test: all
# 	$(CC) $(CFLAGS) -Iinclude $(TEST_SRCS) libft.a -L$(LIB) -l:$(LIB_TEST_NAME) -o $(TEST_BIN)
# 	./$(TEST_BIN)

# # clean test directories
# tclean:
# 	$(RM) $(TEST_OBJS) $(TEST_BIN)

# # Memory leaks detection
# sane: all
# 	$(CC) $(CFLAGS) -I$(INCLUDE) $(TEST_SRCS) $(NAME) -L$(LIB) -l:$(LIB_TEST_NAME) -o $(TEST_BIN) -fsanitize=address -g
# 	./$(TEST_BIN)

# val: all
# 	$(CC) $(CFLAGS) -I$(INCLUDE) $(TEST_SRCS) -L$(LIB) -l:$(LIB_NAME) -o $(TEST_BIN)
# 	valgrind --leak-check=full ./$(TEST_BIN)

# TEST Section
test: all
	$(MAKE) -f src-tests/Makefile test

tclean:
	$(MAKE) -f src-tests/Makefile tclean

# Memory leaks detection
sane:
	$(MAKE) -f src-tests/Makefile sane

val: 
	$(MAKE) -f src-tests/Makefile val

.PHONY: all clean fclean re bonus test tclean sane val
