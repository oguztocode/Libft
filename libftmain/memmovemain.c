#include <stdio.h>
#include <string.h>

int main () {
   char dest[] = "hayır";
   const char src[]  = "evet";
   printf("%zu\n", (size_t)dest);
	printf("%zu\n", (size_t)dest - (size_t)src );
   printf("< HEDEF -> %s, KAYNAK -> %s\n", dest, src);
   ft_memmove(dest, src, 4);
   printf("> HEDEF -> %s, KAYNAK -> %s\n", dest, src);

   return(0);
}
