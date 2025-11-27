#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *newlist;
    t_list  *newelem;

    if (!lst || !f || !del)
        return (NULL);
    newlist = NULL;
    while (lst)
    {
        newelem = ft_lstnew(f(lst->content));
        if (!newelem)
        {
            ft_lstclear(&newlist, del);
            return (NULL);
        }
        ft_lstadd_back(&newlist, newelem);
        lst = lst->next;
    }
    return (newlist);
}