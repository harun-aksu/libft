#include "libft.h"
ft_memcpy( void *restrict dst, const void *restrict src, size_t n)
{
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