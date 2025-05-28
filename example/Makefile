
all:
	cc main.c -o minishell
	echo "ifconfig | grep lo0" | ./minishell

leaksMac:
	export MallocStackLogging=1
	leaks --atExit --list -- ./minishell

.PHONY: all
