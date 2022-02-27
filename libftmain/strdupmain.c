#include<stdio.h>
#include<string.h>

int main()
{
    char source[] = "Oguz";
    char* target = ft_strdup(source);

    printf("%s", target);
    return 0;
}
