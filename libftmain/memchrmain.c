#include <stdio.h>
#include <string.h>

int main () {
   const char str[] = "oguz.oz.test";
   const char ch = '.';
   char *ret;

   ret = ft_memchr(str, ch, strlen(str));

   printf("|%c| > |%s|\n", ch, ret);

   return(0);
}
