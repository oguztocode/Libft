#include <stdio.h>
#include <string.h>

int main () {
   int len;
   const char str[] = "oguz.oz.test";
   const char ch = '.';
   char *ret;

   ret = ft_strrchr(str, ch);

   printf("|%c| > |%s|\n", ch, ret);

   return(0);
}
