#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	int	count;

	temp = *lst;
	count = ft_lstsize(*lst);
	if (lst)
	{
		while (count-- > 0)
		{
			temp = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = temp;
		}
	}
}
