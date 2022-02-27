#include <stdio.h>
#include <string.h>

int	main()
{
	char string[] = "Kalem";
    char buffer[5];
    int r;

    r = ft_strlcpy(buffer, string, 6);

    printf("String '%s' Buffer '%s', Src Uzunluk %d\n",
            string,
            buffer,
            r
          );
}
