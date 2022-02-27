/*Use of string library function memcmp()*/

#include<stdio.h>
#include<string.h>

int main()
{
 //initializing character array
 char str1[ ] = "oguzhan";
 char str2[ ] = "oguzawa";

 //displaying str1 and str2
 printf("str1 = %s\n", str1);
 printf("str2 = %s\n", str2);

 printf("\nmemcmp( str1, str2, 5 ) = %d\n", memcmp( str1, str2, 5 ));
 printf("\nmemcmp( str1, str2, 15 ) = %d\n", memcmp( str1, str2, 15 ));
 printf("\nmemcmp( str2, str1, 15 ) = %d\n", memcmp( str2, str1, 15 ));

 return 0;
}
