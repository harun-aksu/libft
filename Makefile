all:compile run remove

compile:
	@clear
	@gcc test.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c -Wextra -Werror -Wall
run:
	@./a.out all
remove:
	@rm a.out