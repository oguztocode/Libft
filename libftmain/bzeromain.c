int main(void)
{
    char b[5] = "bzero";

    ft_bzero(b, 1);
    printf("%c", b[0]); // NULL (index 0)
    printf("%c", b[1]); // z (index 1)
    return (0);
}
