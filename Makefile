NAME		:= libutils.a

VPATH		:= src/array:src/string:src/char

SRC_ARR		:= arr_free.c arr_len.c arr_dup.c print_arr.c
SRC_STR		:= ft_atol.c str_cchr.c idx_strchr.c
SRC_CHAR	:= ft_isspace.c

BUILD_DIR	:= .build
SRCS		:= $(SRC_ARR) $(SRC_STR) $(SRC_CHAR)
OBJS		:= $(addprefix $(BUILD_DIR)/, $(SRCS:.c=.o))

LIBFT		:= ../libft/libft.a
LIBFTPRINTF	:= ../libftprintf/libftprintf.a

INC			 = -I./../$(dir $(LIBFTPRINTF)) -I./../$(dir $(LIBFT)) -I./include

CC			:= clang
CFLAGS		?= -Wall -Wextra -Werror -g
CPPFLAGS	:= -MMD -MP

# MAKEFLAGS	+= --no-print-directory --silent

all: $(NAME)
	@echo "\033[0;32m$(NAME) created\033[0m"

$(NAME): $(OBJS)
	ar rcs $@ $^

$(BUILD_DIR)/%.o: %.c
	mkdir -p $(@D)
	$(CC) $(CFLAGS) $(INC) -c $< -o $@

clean:
	rm -rf $(BUILD_DIR) build

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean re