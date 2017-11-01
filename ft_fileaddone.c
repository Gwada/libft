#include "libft.h"

t_list	*ft_fileaddone(t_list *lst)
{
	if (!lst)
		return (ft_lstnew(NULL, 0));
	if (!lst->next)
		return (ft_lstnew(NULL, 0));
	return (ft_fileaddone(lst->next));
}
