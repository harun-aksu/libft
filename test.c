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
		if(!strcmp(argv[1],"isalpha"))
		{
			printf("isalpha: %d", ft_isalpha(0));
		}
	}
	else
	{
		printf("To many arguments!");
	}
	return(0);
}
