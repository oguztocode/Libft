#include <stdio.h>
#include <string.h>


int main () {
   const char haystack[20] = "oguzhan";
   const char needle[10] = "ha";
   char *ret;

   ret = ft_strnstr(haystack, needle, 20);

   printf("> : %s\n", ret);

   return(0);
}
