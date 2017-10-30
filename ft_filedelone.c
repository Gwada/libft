#include "libft.h"

t_list	*ft_filedelone(t_list *lst)
{
	if (lst->next != NULL)
		lst->next = ft_filedelone(lst->next);
	else
	{
		free(lst->content);
		lst->content_size = 0;
		free (lst);
		lst = NULL;
	}
	return (lst);
}
