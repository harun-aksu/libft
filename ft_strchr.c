#include "libft.h"

int *ft_strchr(const char *s, int c)
{
    char    *str;

    str = (char*)s;
    while (*str != c) 
        if (!(*str++))
            return (NULL);       
    return(0);
}