#include <stdio.h>

int	main()
{
	int		tab[20];
	int	i;
	t_list	*begin;
	*tab = 0;
	begin = ft_lstnew(tab);

	printf("Test :\n");
	i = 0;
	while (++i < 10)
	{
		tab[i] = i;
		ft_lstadd_front(&begin, ft_lstnew(tab + i));
	}
	t_list	*tmp = begin;
	printf("9 > 0 \n");
	while (tmp)
	{
		printf("%i ", *((int*)tmp->content));
		tmp = tmp->next;
	}
}
