#include "libft.h"



void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    char    *s;
    char    *d;
    size_t  i;

    
    d = (char*)dst;
    s = (char*)src;
    i = 0;
    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return (dst);
}
