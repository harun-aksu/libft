#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    void    *original_dst; 
    original_dst    =   dst;

    if(!dst && !src)
        return (0);
    while(n-- > 0)
        *(char*)(dst++) = *(char*)(src++);
    
    return(original_dst);
}
