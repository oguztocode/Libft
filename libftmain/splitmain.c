int main()
{
    char a[] = "----test---deneme----123";
    char b = '-';
    char **c = ft_split(a, b);
    printf("%s", *c);
    return(0);
}
