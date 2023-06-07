#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp;
	int	count;

	temp = lst;
	count = ft_lstsize(lst) - 1;
	while (count-- > 0)
		temp = temp->next;
	return (temp);
}
