}
#include <stdio.h>
#include <string.h>

int	main()
{
	char str[10];
	strcpy(str, "Merhaba");
	puts(str);
	ft_memset(str, '$', 5);
	puts(str);
}
