#include "libft.h"

void	print_lists(t_list *beg)
{
	t_list *aux;

	while (beg)
	{
		printf("%s\n", beg->content);
		beg = beg->next;
	}
	printf("fin printing\n");
}

void    del_(void *content)
{
     free(content);
}

int main(int argc, char **argv)
{
	int i = 1;
	t_list **listas;
	listas = malloc(sizeof(t_list *) * argc - 1);
	char *str = malloc(5);
	str = "miau";
	*listas = ft_lstnew(str);
	while (i < argc)
	{
		//printf("%s\n", ft_lstnew(argv[i++]));
		ft_lstadd_front(listas, ft_lstnew(argv[i++]));
	}
	printf("%d listas\n", ft_lstsize(*listas));
	print_lists(*listas);
	printf("goindex->%s\n", ft_lstgoindex(listas, 3)->content);
	void	(*f)(void *);
	f = &del_;	
	ft_lstdelone(ft_lstgoindex(listas, 3), f);
	ft_lstadd_back(listas, ft_lstnew("last"));
	print_lists(*listas);
}
