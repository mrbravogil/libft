
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newelem;

	newelem = malloc(sizeof(t_list));
	if (!newelem)
		return (NULL);
	newelem->content = content;
	newelem->next = NULL;
	return (newelem);
}

/*int main(void)
{
    t_list *lista;
    t_list *n1;
    t_list *n2;

    lista = NULL;
    n1 = ft_lstnew("Hola");
    n2 = ft_lstnew("Qué tal");

    lista = n1;
    n1->next = n2;   
    n2->next = NULL;

    printf("Nodo 1: %s\n", (char *)n1->content);
	printf("Nodo 2: %s\n", (char *)n2->content);

    return 0;
}*/
