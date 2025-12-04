
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*tmp;
	int		i;

	tmp = lst;
	i = 0;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

/*int main(void)
{
    t_list *lista;
    t_list *n1;
    t_list *n2;
    t_list *n3;
    int	i;

    lista = NULL;
    n1 = ft_lstnew("Hola");
    n2 = ft_lstnew("Qué tal");
    n3 = ft_lstnew("Adios");

    lista = n1;
    n1->next = n2;   
    n2->next = n3;

	i = ft_lstsize(lista);	

    printf("El contador de la lista es: %d\n", i);

    return 0;
}*/