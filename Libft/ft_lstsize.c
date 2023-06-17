#include "../push_swap/push_swap.h"

int	ft_lstsize(t_list *lst)
{
	int	a;

	a = 0;
	if (!lst)
		return (0);
	while (lst)
	{
		lst = lst->next;
		a++;
	}
	return (a);
}
