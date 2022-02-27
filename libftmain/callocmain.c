#include<stdio.h>
#include<string.h>

int main()
{
    char source[] = "Oguzhan";
    char* target = ft_strdup(source);

    printf("%s", target);
    return 0;
}
