/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabravo- <mabravo-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 10:48:07 by mabravo-          #+#    #+#             */
/*   Updated: 2025/12/01 10:48:10 by mabravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*newelem;
	void	*new_content;

	if (!lst || !f || !del)
		return (NULL);
	newlist = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		newelem = ft_lstnew(new_content);
		if (!newelem)
		{
			ft_lstclear(&newlist, del);
			del(new_content);
			return (NULL);
		}
		ft_lstadd_back(&newlist, newelem);
		lst = lst->next;
	}
	return (newlist);
}
