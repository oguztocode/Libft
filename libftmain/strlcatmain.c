#include <string.h>
#include <stdio.h>

int main()
{
	char first[] = "Kalem";
	char last[] = "Kağıt";
	int r;
	int size = 11;
	char buffer[size]; // total olabilcek değer yer açtık. (buffer)

	strcpy(buffer,first);
	r = ft_strlcat(buffer,last,size); // FUNCTION

	puts(buffer);
	printf("Dönen değer: %d\n",r);
	if( r > size )
		puts("Yazı full kopyalanmadı");
	else
		puts("Yazı full kopyalandı");

	return(0);
}
