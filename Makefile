all:compile run remove

compile:
	@clear
	@gcc test.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c -Wextra -Werror -Wall
run:
	@./a.out strlen
remove:
	@rm a.out