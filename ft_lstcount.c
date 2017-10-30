#include "libft.h"

size_t	ft_lstcount(t_list *lst)
{
	if (!lst || !lst->next)
		return (0);
	return (1 + ft_lstcount(lst->next));
}
