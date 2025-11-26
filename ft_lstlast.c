#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    t_list  *tmp;

    if (!lst)
        return(NULL);
    tmp = lst;
    while (tmp -> next)
        tmp = tmp -> next;
    return (tmp);
}

/*int main(void)
{
    t_list *lista;
    t_list *n1;
    t_list *n2;
    t_list *n3;
    t_list *ultimo;

    lista = NULL;
    n1 = ft_lstnew("Hola");
    n2 = ft_lstnew("Qué tal");
    n3 = ft_lstnew("Adios");

    lista = n1;
    n1->next = n2;   
    n2->next = n3;

    ultimo = ft_lstlast(lista);

    if (ultimo)
        printf("Último nodo: %s\n", (char *)ultimo->content);
    else
        printf("La lista está vacía\n");

    return 0;
}*/