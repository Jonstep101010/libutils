NAME		:= libft.a

INCS		:= -I ./include

VPATH		:= src/arr src/char src/gnl src/io src/list src/memory src/string src/printf

SRC_ARR		:= arr_free.c arr_len.c arr_dup.c
SRC_CHAR	:= ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_tolower.c ft_toupper.c
SRC_GNL		:= get_next_line.c get_next_line_utils.c
SRC_IO		:= ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c put_char.c put_str.c put_nbr.c
SRC_LIST	:= ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c
SRC_MEM		:= ft_bzero.c ft_calloc.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c
SRC_STR		:= ft_split.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c \
				ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_atoi.c ft_itoa.c \
				 eol.c atol.c
SRC_PRINTF	:= ft_printf.c

SRCS		:= $(SRC_ARR) $(SRC_CHAR) $(SRC_GNL) $(SRC_IO) $(SRC_LIST) $(SRC_MEM) $(SRC_STR) $(SRC_PRINTF)

BUILD_DIR	:= .build
OBJS		:= $(addprefix $(BUILD_DIR)/, $(SRCS:%.c=%.o))
DEPS		:= $(OBJS:.o=.d)

CC			:= clang
CFLAGS		?= -Wall -Wextra -Werror -g
CPPFLAGS	:= -MMD -MP

RM			:= rm -rf
MAKEFLAGS	+= --no-print-directory

ARFLAGS		:= -rcs

all: $(NAME)
	@printf "\n"
	@echo "\033[0;32m      :::        ::::::::::: :::::::::  :::::::::: :::::::::::"
	@echo "\033[0;32m     :+:            :+:     :+:    :+: :+:            :+:"
	@echo "\033[0;32m    +:+            +:+     +:+    +:+ +:+            +:+"
	@echo "\033[0;32m   +#+            +#+     +#++:++#+  :#::+::#       +#+"
	@echo "\033[0;32m  +#+            +#+     +#+    +#+ +#+            +#+"
	@echo "\033[0;32m #+#            #+#     #+#    #+# #+#            #+#"
	@echo "\033[0;32m########## ########### #########  ###            ###\033[0m"
	@printf "\n"

$(NAME): $(OBJS)
	echo "\nlibft files compiled: \033[0;32m\xE2\x9C\x93\033[0m"
	$(AR) $(ARFLAGS) $@ $^

$(BUILD_DIR)/%.o: %.c
	mkdir -p .build
	$(CC) $(CFLAGS) $(CPPFLAGS) -c $< $(INCS) -o $@
# $(info CC $<)

clean:
	$(RM) $(OBJS) $(DEPS)

fclean: clean
	$(RM) $(NAME)
	$(RM) .build

re:
	$(MAKE) fclean
	$(MAKE) all

.PHONY: clean fclean re
# .SILENT:



-include $(DEPS)