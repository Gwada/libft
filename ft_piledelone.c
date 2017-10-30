#include "libft.h"

t_list	*ft_piledelone(t_list *lst)
{
	t_list	*next;

	if (!lst)
		return (NULL);
	free(lst->content);
	lst->content_size = 0;
	next = lst->next;
	lst->next = NULL;
	free(lst);
	return (next);
}
