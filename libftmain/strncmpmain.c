#include <stdio.h>
#include <string.h>

int main () {
   char str1[15];
   char str2[15];
   int ret;

   strcpy(str1, "a");
   strcpy(str2, "b");

   ret = strncmp(str1, str2, 1);

   if(ret < 0) {
      printf("str1(az) < str2(fazla)");
   } else if(ret > 0) {
      printf("str2(az) < str1(fazla)");
   } else {
      printf("str1 === str2");
   }

   return(0);
}
