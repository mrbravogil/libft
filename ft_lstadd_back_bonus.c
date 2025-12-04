
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!*lst)
		*lst = new;
	else
		ft_lstlast(*lst)->next = new;
}

/*int main(void)
{
    t_list *lista;
    t_list *n1;
    t_list *n2;
    t_list *n3;
	t_list *n4;
    t_list *ultimo;

    lista = NULL;
    n1 = ft_lstnew("Hola");
    n2 = ft_lstnew("Qué tal");
    n3 = ft_lstnew("Adios");
	n4 = ft_lstnew("!!!");
    lista = n1;
    n1->next = n2;   
    n2->next = n3;

	ft_lstadd_back(&lista, n4);
    ultimo = ft_lstlast(lista);

    if (ultimo)
        printf("Último nodo: %s\n", (char *)ultimo->content);
    else
        printf("La lista está vacía\n");

    return 0;
}*/
