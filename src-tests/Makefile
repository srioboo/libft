# Library name
LIB_TEST_NAME = libfuntest.a

# Library to test, add here your libs to test
LIB_TESTED = libft.a

# Compiler and flags for compilation
CC = cc
CFLAGS = -Wall -Werror -Wextra

## Name of the test main executable
TEST_DIR = src-tests
TEST_BIN = test.out
# Directories
INCLUDE = $(TEST_DIR)/include
LIB = $(TEST_DIR)/lib

## Library Test source and objects
TEST_SRCS = $(wildcard $(TEST_DIR)/*.c)
TEST_OBJS = $(TEST_SRCS:.c=.o)
# get next line src
GNL_SRCS = get_next_line/get_next_line.c \
	get_next_line/get_next_line_utils.c

# Test: generate test binary
test:
	$(CC) $(CFLAGS) -I$(INCLUDE) $(GNL_SRCS) $(TEST_SRCS) $(LIB_TESTED) -L$(LIB) -l:$(LIB_TEST_NAME) -o $(TEST_BIN)
	./$(TEST_BIN)

# clean test directories
tclean:
	$(RM) $(TEST_DIR)/$(TEST_OBJS) $(TEST_BIN)

# Memory leaks detection
sane:
	$(CC) $(CFLAGS) -I$(INCLUDE) $(GNL_SRCS) $(TEST_SRCS) $(LIB_TESTED) -L$(LIB) -l:$(LIB_TEST_NAME) -o $(TEST_BIN) -fsanitize=address -g
	./$(TEST_BIN)

val:
	$(CC) $(CFLAGS) -I$(INCLUDE) $(GNL_SRCS) $(TEST_SRCS) $(LIB_TESTED) -L$(LIB) -l:$(LIB_TEST_NAME) -o $(TEST_BIN)
	valgrind --leak-check=full ./$(TEST_BIN)

.PHONY: test tclean sane val