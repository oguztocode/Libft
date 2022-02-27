#include <stdio.h>

void	ft_del(void *content)
{
	*(int*)content = 0;
	return ;
}


int	main()
{
	int		tab[20];
	int	i;
	t_list	*begin;
	*tab = 0;
	begin = ft_lstnew(tab);

	printf("\nTest :\n");
	i = 0;
	while (++i < 10)
	{
		tab[i] = i;
		ft_lstadd_front(&begin, ft_lstnew(tab + i));
	}
	t_list	*tmp = begin;
	printf("9 > 0.\n");
	while (tmp)
	{
		printf("%i ", *((int*)tmp->content));
		tmp = tmp->next;
	}

	printf("\n\nTest 2. Asama :\n");
	tmp = begin->next;
	ft_lstdelone(begin, ft_del);
	begin = tmp;
	printf("8 > 0:\n");
	while (tmp)
	{
		printf("%i ", *((int*)tmp->content));
		tmp = tmp->next;
	}
}
