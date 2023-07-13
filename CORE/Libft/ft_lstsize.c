#include <libft.h>

int	ft_lstsize(t_list *lst)
{
	t_list	*temp;
	int	i;

	i = 0;
	temp = lst;
	while (temp != NULL)
	{
		++i;
		temp = temp->next;
	}
	return (i);
}
