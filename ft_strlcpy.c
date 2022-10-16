#include "libft.h"

int ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t i = 0;
    
    if(dstsize > 0)
    {
        while(src[i] && i < (dstsize - 1))
        {
            dst[i] = src[i];
            i++;
        }
    }
    while (src[i])
        i++;
    
    return(i);
}