#include "libft.h"

t_list	*ft_pileaddone(t_list *lst)
{
	t_list	*new;

	if (!(new = ft_lstnew(NULL,0)))
		return (NULL);
	new->next = lst;
	return (new);
}
