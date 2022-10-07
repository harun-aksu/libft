#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

int main(int argc, char **argv)
{
	if(argc ==  1 || argc == 2)
	{	
		int i = 0;
		char *func;
		
		func =(char *) malloc(16*sizeof(char));

		while(argv[1][i])
		{
			func[i] = argv[1][i];
			i++;
		}
		if(!strcmp(argv[1],"isalpha") || argc == 1)
		{
			printf("isalpha:  \n", ft_isalpha(0));
		}
		if(!strcmp(argv[1],"isdigit") || argc == 1)
		{
			printf("isdigit:  \n", ft_isdigit(0));
		}
		if(!strcmp(argv[1],"isalnum") || argc == 1)
		{
			printf("isalnum:  \n", ft_isalnum(0));
		}
		if(!strcmp(argv[1],"isascii") || argc == 1)
		{
			printf("isascii:  \n", ft_isascii(0));
		}
		if(!strcmp(argv[1],"isprint") || argc == 1)
		{
			printf("isprint:  \n", ft_isprint(0));
		}
		if(!strcmp(argv[1],"strlen") || argc == 1)
		{
			printf("strlen:  \n", ft_strlen(0));
		}
		if(!strcmp(argv[1],"memset") || argc == 1)
		{
			printf("memset:  \n", ft_memset(0));
		}
		if(!strcmp(argv[1],"bzero") || argc == 1)
		{
			printf("bzero:  \n", ft_bzero(0));
		}
		if(!strcmp(argv[1],"memcpy") || argc == 1)
		{
			printf("memcpy:  \n", ft_memcpy(0));
		}
		if(!strcmp(argv[1],"memmove") || argc == 1)
		{
			printf("memmove:  \n", ft_memmove(0));
		}
		if(!strcmp(argv[1],"strlcpy") || argc == 1)
		{
			printf("strlcpy:  \n", ft_strlcpy(0));
		}
		if(!strcmp(argv[1],"strlcat") || argc == 1)
		{
			printf("strlcat:  \n", ft_strlcat(0));
		}
		if(!strcmp(argv[1],"toupper") || argc == 1)
		{
			printf("toupper:  \n", ft_toupper(0));
		}
		if(!strcmp(argv[1],"tolower") || argc == 1)
		{
			printf("tolower:  \n", ft_tolower(0));
		}
		if(!strcmp(argv[1],"strchr") || argc == 1)
		{
			printf("strchr:  \n", ft_strchr(0));
		}
		if(!strcmp(argv[1],"strrchr") || argc == 1)
		{
			printf("strrchr:  \n", ft_strrchr(0));
		}
		if(!strcmp(argv[1],"strncmp") || argc == 1)
		{
			printf("strncmp:  \n", ft_strncmp(0));
		}
		if(!strcmp(argv[1],"memchr") || argc == 1)
		{
			printf("memchr:  \n", ft_memchr(0));
		}
		if(!strcmp(argv[1],"memcmp") || argc == 1)
		{
			printf("memcmp:  \n", ft_memcmp(0));
		}
		if(!strcmp(argv[1],"strnstr") || argc == 1)
		{
			printf("strnstr:  \n", ft_strnstr(0));
		}
		if(!strcmp(argv[1],"atoi") || argc == 1)
		{
			printf("atoi:  \n", ft_atoi(0));
		}
		if(!strcmp(argv[1],"malloc") || argc == 1)
		{
			printf("malloc:  \n", ft_malloc(0));
		}
		if(!strcmp(argv[1],"calloc") || argc == 1)
		{
			printf("calloc:  \n", ft_calloc(0));
		}
	}
	else
	{
		printf("To many arguments!");
	}
	return(0);
}
