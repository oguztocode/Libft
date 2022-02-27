#include <stdio.h>
#include <string.h>

int main () {
   const char str[] = "oğuz.test";
   const char ch = '.';
   char *ret;

   ret = ft_strchr(str, ch);

   printf("|%c| > |%s|\n", ch, ret);

   return(0);
}
