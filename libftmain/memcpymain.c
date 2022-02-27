#include <stdio.h>
#include <string.h>

int main () {
   const char src[7] = "Kalem";
   char dest[6];
   strcpy(dest,"Kağıt");
   printf("< HEDEF  = %s\n", dest);
   ft_memcpy(dest, src, strlen(src)+1);
   printf("> HEDEF = %s\n", dest);

   return(0);
}
