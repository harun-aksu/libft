#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"


int main(int argc, char **argv)
{	
	char *ptr;
	if(argc == 2)
	{	
		if(!strcmp(argv[1],"isalpha") || !strcmp(argv[1],"all"))
		{
			printf("isalpha: %d \n", ft_isalpha(65));
		}
		if(!strcmp(argv[1],"isdigit") || !strcmp(argv[1],"all"))
		{
			printf("isdigit: %d \n", ft_isdigit('4'));
		}
		if(!strcmp(argv[1],"isalnum") || !strcmp(argv[1],"all"))
		{
			printf("isalnum: %d \n", ft_isalnum(65));
		}
		if(!strcmp(argv[1],"isascii") || !strcmp(argv[1],"all"))
		{
			printf("isascii: %d \n", ft_isascii(0));
		}
		if(!strcmp(argv[1],"isprint") || !strcmp(argv[1],"all"))
		{
			printf("isprint: %d \n", ft_isprint(30));
		}
		if(!strcmp(argv[1],"strlen") || !strcmp(argv[1],"all"))
		{
			ptr = strdup("harunaksu");
			printf("strlen: %zu \n", ft_strlen(ptr));
			free(ptr);
		}
		if(!strcmp(argv[1],"memset") || !strcmp(argv[1],"all"))
		{
			ptr = strdup("harun_aksu");
			printf("memset: %s \n",ft_memset((void*)ptr,88,3));
			free(ptr);
		}
		if(!strcmp(argv[1],"bzero") || !strcmp(argv[1],"all"))
		{
			ptr = strdup("--------");
			printf("bzero (before): %s | ",ptr);
			ft_bzero(ptr,2);
			printf("bzero (after): %s\n",ptr);
			free(ptr);
		}
		if(!strcmp(argv[1],"memcpy") || !strcmp(argv[1],"all"))
		{
			ptr = strdup("harun");
			void *dst = malloc(ft_strlen(ptr) * sizeof(char));
			printf("memcpy: %d \n", ft_memcpy(dst, ptr,  4));
			free(ptr);
		}/*
		if(!strcmp(argv[1],"memmove") || !strcmp(argv[1],"all"))
		{
			printf("memmove: %d \n", ft_memmove(0));
		}
		if(!strcmp(argv[1],"strlcpy") || !strcmp(argv[1],"all"))
		{
			printf("strlcpy: %d \n", ft_strlcpy(0));
		}
		if(!strcmp(argv[1],"strlcat") || !strcmp(argv[1],"all"))
		{
			printf("strlcat: %d \n", ft_strlcat(0));
		}
		if(!strcmp(argv[1],"toupper") || !strcmp(argv[1],"all"))
		{
			printf("toupper: %d \n", ft_toupper(0));
		}
		if(!strcmp(argv[1],"tolower") || !strcmp(argv[1],"all"))
		{
			printf("tolower: %d \n", ft_tolower(0));
		}
		if(!strcmp(argv[1],"strchr") || !strcmp(argv[1],"all"))
		{
			printf("strchr: %d \n", ft_strchr(0));
		}
		if(!strcmp(argv[1],"strrchr") || !strcmp(argv[1],"all"))
		{
			printf("strrchr: %d \n", ft_strrchr(0));
		}
		if(!strcmp(argv[1],"strncmp") || !strcmp(argv[1],"all"))
		{
			printf("strncmp: %d \n", ft_strncmp(0));
		}
		if(!strcmp(argv[1],"memchr") || !strcmp(argv[1],"all"))
		{
			printf("memchr: %d \n", ft_memchr(0));
		}
		if(!strcmp(argv[1],"memcmp") || !strcmp(argv[1],"all"))
		{
			printf("memcmp: %d \n", ft_memcmp(0));
		}
		if(!strcmp(argv[1],"strnstr") || !strcmp(argv[1],"all"))
		{
			printf("strnstr: %d \n", ft_strnstr(0));
		}
		if(!strcmp(argv[1],"atoi") || !strcmp(argv[1],"all"))
		{
			printf("atoi: %d \n", ft_atoi(0));
		}
		if(!strcmp(argv[1],"calloc") || !strcmp(argv[1],"all"))
		{
			printf("calloc: %d \n", ft_calloc(0));
		}
		if(!strcmp(argv[1],"strdup") || !strcmp(argv[1],"all"))
		{
			printf("strdup: %d \n", ft_strdup(0));
		}
		if(!strcmp(argv[1],"substr") || !strcmp(argv[1],"all"))
		{
			printf("substr: %d \n", ft_substr(0));
		}
		if(!strcmp(argv[1],"strjoin") || !strcmp(argv[1],"all"))
		{
			printf("strjoin: %d \n", ft_strjoin(0));
		}
		if(!strcmp(argv[1],"strtrim") || !strcmp(argv[1],"all"))
		{
			printf("strtrim: %d \n", ft_strtrim(0));
		}
		if(!strcmp(argv[1],"split") || !strcmp(argv[1],"all"))
		{
			printf("split: %d \n", ft_split(0));
		}
		if(!strcmp(argv[1],"itoa") || !strcmp(argv[1],"all"))
		{
			printf("itoa: %d \n", ft_itoa(0));
		}
		if(!strcmp(argv[1],"strmapi") || !strcmp(argv[1],"all"))
		{
			printf("strmapi: %d \n", ft_strmapi(0));
		}
		if(!strcmp(argv[1],"striteri") || !strcmp(argv[1],"all"))
		{
			printf("striteri: %d \n", ft_striteri(0));
		}
		if(!strcmp(argv[1],"putchar_fd") || !strcmp(argv[1],"all"))
		{
			printf("putchar_fd: %d \n", ft_putchar_fd(0));
		}
		if(!strcmp(argv[1],"putstr_fd") || !strcmp(argv[1],"all"))
		{
			printf("putstr_fd: %d \n", ft_putstr_fd(0));
		}
		if(!strcmp(argv[1],"putendl_fd") || !strcmp(argv[1],"all"))
		{
			printf("putendl_fd: %d \n", ft_putendl_fd(0));
		}
		if(!strcmp(argv[1],"putnbr_fd") || !strcmp(argv[1],"all"))
		{
			printf("putnbr_fd: %d \n", ft_putnbr_fd(0));
		} */
		
	}
	else
	{
		if(argc > 2)
			printf("\n	To many arguments!");
		else
			printf("\n	Missing arguments!");
		 printf(" Need 2 arguments. \n	Example:  ./a.out isalpha \n	Example ./a.out all\n\n");
	}
	return(0);
}