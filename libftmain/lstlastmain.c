#include <stdio.h>

int	main()
{
	int		tab[20];
	t_list	*begin;
	*tab = 0;
	begin = ft_lstnew(tab);

	printf("Test :\n");
	if (*((int*)(ft_lstlast(begin)->content)) == 0) // son eleman sıfır ise
		printf("OK\n");
	else
		printf("Fail\n");
}
