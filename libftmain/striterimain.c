#include <stdio.h>

void	ft_test(unsigned int i, char * c)
{
	printf("%p\n", c);
}

int	main()
{
	char ab[] = "abc";
	ft_striteri(ab, ft_test);
	//printf("abc > ABC : %s\n", ab);
}
