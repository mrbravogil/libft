#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *newelem;

    newelem = malloc(sizeof(t_list));
    if (!newelem)
        return (NULL);

    newelem->content = content;
    newelem->next = NULL;
    return (newelem);
}