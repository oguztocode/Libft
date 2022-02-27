#include <stdio.h>

int main()
{
    char src[] = "substr function Implementation";

    int m = 7;
    int n = 12;

    char* dest = ft_substr(src, m, n);

    printf("%s\n", dest);
}
