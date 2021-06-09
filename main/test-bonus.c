#include "../libft.h"
#include <stdio.h>

void	check_lstnew()
{
	char	*content;
	t_list	*ret;

	content = "kleber";

	ret = ft_lstnew(content);
	printf("content = %s \n", (char *)ret->content);
	free(ret);
	printf("end test\n");
}

void	check_lstadd_front()
{
	char	*content;
	t_list	*new;
	t_list	**lst;
	t_list	*begin;
	int		l;
	int		i;

	content = "primeira lista";
	*lst = ft_lstnew(content);
	new = ft_lstnew("ultima lista");
	ft_lstadd_front(lst, new);
	printf("lista completa");
	// FALTA TERMINAR
	//printf("content = %s \n", (char *)new->content);
	free(lst);
	free(new);
	printf("end test\n");
}
t_list	*create_lst(void *content)
{
	t_list	*lst;

	lst = malloc(sizeof(t_list));
	lst->content = content;
	lst->next = NULL;	
}

t_list	*add_lst(t_list **lst, t_list *new)
{
	if (!lst)
		if (!new)
			return (NULL);
		else
			return (create_lst(new->content));
		new->next = *lst;
		*lst = new;
}
void	print_lst(t_list **lst)
{
	int	count = 0;
	printf("##########\n");
	printf("imprimindo nova lista criada\n");
	while (*lst)
	{
		printf("conteudo: %s\n",(char *)((*lst)->content));
		*lst = (*lst)->next;
		count++;
	}
	printf("total de nos:%i\n",count);

	
}

void	del(void *contents)
{
	free(contents);
}

int	main(void)
{
	t_list	*list;
	t_list	*new;

	printf("*** TEST BONUS ***\n");
	printf("test ft_lstnew\n");
	check_lstnew();
	//printf("test ft_lstadd_front\n");
	//check_lstadd_front();
	printf("brincando com lista\n");
	printf("criando lista\n");
	list = create_lst("primeiro");
	printf("imprimindo lista criada\n");
	printf("conteudo: %s\n",(char *)list->content);
	printf("adicionando um novo no na lista\n");
	new = ft_lstnew("segundo");
	ft_lstadd_front(&list,new);
	print_lst(&list);
	printf("apangando elemento\n");
	printf("testando FT_LSTDELONE\n");
	ft_lstdelone(list, del);
	print_lst(&list);
}
