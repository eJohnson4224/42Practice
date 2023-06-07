#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_head;
	t_list	*newlst;

	if (lst && f && del)
	{
		new_head = 0;
		while (lst)
		{
			newlst = ft_lstnew(f(lst->content));
			if (!newlst)
			{
				ft_lstclear(&new_head, del);
				return (0);
			}
			ft_lstadd_back(&new_head, newlst);
			lst = lst->next;
		}
		return (new_head);
	}	
	return (0);
}
