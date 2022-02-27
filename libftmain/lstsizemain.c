#include <stdio.h>

int	main()
{
	int		tab[20];
	t_list	*begin;
	*tab = 0;
	begin = ft_lstnew(tab);

	printf("Test :\n");
	if (ft_lstsize(begin) == 1) // şuanda sadece sıfır olan bir eleman var
		printf("OK\n");
	else
		printf("Fail\n");
}
