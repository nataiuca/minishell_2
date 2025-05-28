LIBFT_NAME := libft.a
LIBFT_GH := https://github.com/josejpgg/libft_increment.git
LIBFT_PATH := ./lib/libft/
PROGRAM_NAME := minishell
CC = cc
FLAGS = 
# FLAGS = -Wall -Werror -Wextra
SOURCE := main.c param.c \
safe_func.c interactive.c safe_free.c str_util.c \
cmd_controller.c line.c redirection.c token.c \
cmd_impl.c vector.c cmd_util.c ./history/clear.c \
./history/create.c ./history/history.c \
./history/parse.c ./history/history_utils.c builtin_impl.c \
./builtins/bi_controller.c \
./builtins/cd.c ./builtins/echo.c ./builtins/env.c ./builtins/exit.c \
./builtins/export.c ./builtins/pwd.c ./builtins/unset.c \
./util/quote.c ./util/error.c ./util/util.c \
parse.c constructor.c nulterminate.c heredoc.c argument.c \
token_util.c variable.c cmd_handle.c ./input/init.c\
env_init.c env_create.c env_update.c
# READLINE := -lreadline -lncurses
READLINE := -I/usr/local/opt/readline/include -L/usr/local/opt/readline/lib -lreadline
COMPILE := $(SOURCE:.c=.o)

all: minishell

%.o: %.c
	$(CC) $(READLINE) $(FLAGS) -c $< -o $@

minishell: $(COMPILE)
	$(CC) $(FLAGS) $(COMPILE) $(LIBFT_PATH)/$(LIBFT_NAME) $(READLINE) -o $(PROGRAM_NAME)

clean:
	@rm -rf $(COMPILE)
	@make clean -C $(LIBFT_PATH)

fclean:
	@rm -rf $(PROGRAM_NAME)
	@make fclean -C $(LIBFT_PATH)
	@rm -rf $(LIBFT_NAME)

re: fclean clean libft lib all

lib:
	@if [ ! -f "$(LIBFT_PATH)/$(LIBFT_NAME)" ]; then \
		make -C $(LIBFT_PATH); \
	fi

libft:
	@if [ ! -d "./lib" ]; then \
		mkdir -p lib; \
	fi
	@if [ -d "./lib/libft" ]; then \
		rm -rf ./lib/libft; \
	fi
	git clone $(LIBFT_GH) $(LIBFT_PATH)

.PHONY: all clean fclean re lib
