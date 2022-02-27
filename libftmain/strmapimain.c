#include <stdio.h>

char	test(unsigned int i, char c)
{
	i = 0;
	return (c - 32);
}

int	main()
{
	printf("abc > ABC : %s\n", ft_strmapi("abc", test));
}
