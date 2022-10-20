#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t len)
{
   void *original_dest = dest;

   if(!dest && !src)
      return(NULL);

   if (dest>src)
   {
      len--;
      while (n => 0)
         *(char*)(dest+(len--)) = *(char*)(src+(len--));
   }
   else
   {
      size_t   i;   

      i  =  0;
      while (i < n)
         *(char*)(dest+(i++)) = *(char*)(src+(i++));
   }
   
   return(original_dest);
      
}