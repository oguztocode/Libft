#include <stdio.h>

void	ft_del2(void *content)
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
	ft_lstclear(&begin, &ft_del2);
	printf("Bir sey yok\n");
	tmp = begin;
	while (tmp)
	{
		printf("%i ", *((int*)tmp->content));
		tmp = tmp->next;
	}

	printf("\n");
}
