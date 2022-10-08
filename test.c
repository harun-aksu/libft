#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"


int main(int argc, char **argv)
{
	if(argc == 2)
	{	
		int i = 0;
		
		if(!strcmp(argv[1],"isalpha"))
		{
			printf("isalpha: %d \n", ft_isalpha(0));
		}
		if(!strcmp(argv[1],"isdigit"))
		{
			printf("isdigit: %d \n", ft_isdigit(0));
		}
		if(!strcmp(argv[1],"isalnum"))
		{
			printf("isalnum: %d \n", ft_isalnum(0));
		}
		/*if(!strcmp(argv[1],"isascii"))
		{
			printf("isascii: %d \n", ft_isascii(0));
		}
		if(!strcmp(argv[1],"isprint"))
		{
			printf("isprint: %d \n", ft_isprint(0));
		} 
		if(!strcmp(argv[1],"strlen"))
		{
			printf("strlen: %d \n", ft_strlen(0));
		}
		if(!strcmp(argv[1],"memset"))
		{
			printf("memset: %d \n", ft_memset(0));
		}
		if(!strcmp(argv[1],"bzero"))
		{
			printf("bzero: %d \n", ft_bzero(0));
		}
		if(!strcmp(argv[1],"memcpy"))
		{
			printf("memcpy: %d \n", ft_memcpy(0));
		}
		if(!strcmp(argv[1],"memmove"))
		{
			printf("memmove: %d \n", ft_memmove(0));
		}
		if(!strcmp(argv[1],"strlcpy"))
		{
			printf("strlcpy: %d \n", ft_strlcpy(0));
		}
		if(!strcmp(argv[1],"strlcat"))
		{
			printf("strlcat: %d \n", ft_strlcat(0));
		}
		if(!strcmp(argv[1],"toupper"))
		{
			printf("toupper: %d \n", ft_toupper(0));
		}
		if(!strcmp(argv[1],"tolower"))
		{
			printf("tolower: %d \n", ft_tolower(0));
		}
		if(!strcmp(argv[1],"strchr"))
		{
			printf("strchr: %d \n", ft_strchr(0));
		}
		if(!strcmp(argv[1],"strrchr"))
		{
			printf("strrchr: %d \n", ft_strrchr(0));
		}
		if(!strcmp(argv[1],"strncmp"))
		{
			printf("strncmp: %d \n", ft_strncmp(0));
		}
		if(!strcmp(argv[1],"memchr"))
		{
			printf("memchr: %d \n", ft_memchr(0));
		}
		if(!strcmp(argv[1],"memcmp"))
		{
			printf("memcmp: %d \n", ft_memcmp(0));
		}
		if(!strcmp(argv[1],"strnstr"))
		{
			printf("strnstr: %d \n", ft_strnstr(0));
		}
		if(!strcmp(argv[1],"atoi"))
		{
			printf("atoi: %d \n", ft_atoi(0));
		}
		if(!strcmp(argv[1],"calloc"))
		{
			printf("calloc: %d \n", ft_calloc(0));
		}
		if(!strcmp(argv[1],"strdup"))
		{
			printf("strdup: %d \n", ft_strdup(0));
		}
		if(!strcmp(argv[1],"substr"))
		{
			printf("substr: %d \n", ft_substr(0));
		}
		if(!strcmp(argv[1],"strjoin"))
		{
			printf("strjoin: %d \n", ft_strjoin(0));
		}
		if(!strcmp(argv[1],"strtrim"))
		{
			printf("strtrim: %d \n", ft_strtrim(0));
		}
		if(!strcmp(argv[1],"split"))
		{
			printf("split: %d \n", ft_split(0));
		}
		if(!strcmp(argv[1],"itoa"))
		{
			printf("itoa: %d \n", ft_itoa(0));
		}
		if(!strcmp(argv[1],"strmapi"))
		{
			printf("strmapi: %d \n", ft_strmapi(0));
		}
		if(!strcmp(argv[1],"striteri"))
		{
			printf("striteri: %d \n", ft_striteri(0));
		}
		if(!strcmp(argv[1],"putchar_fd"))
		{
			printf("putchar_fd: %d \n", ft_putchar_fd(0));
		}
		if(!strcmp(argv[1],"putstr_fd"))
		{
			printf("putstr_fd: %d \n", ft_putstr_fd(0));
		}
		if(!strcmp(argv[1],"putendl_fd"))
		{
			printf("putendl_fd: %d \n", ft_putendl_fd(0));
		}
		if(!strcmp(argv[1],"putnbr_fd"))
		{
			printf("putnbr_fd: %d \n", ft_putnbr_fd(0));
		}
		*/
	}
	else
	{
		printf("To many arguments!");
	}
	return(0);
}
