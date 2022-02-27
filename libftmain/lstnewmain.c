#include <stdio.h>
int	main()
{
	int		tab[20];
	t_list	*begin;
	*tab = 0;
	begin = ft_lstnew(tab);
	printf("Test :\n");
	if (begin && !begin->next && begin->content && *((int*)begin->content) == 0)
		printf("OK\n");
	else
		printf("Fail\n");
}
