#include "libft.h"

void	ft_putendl_lst(t_list *lst)
{
	if (!lst)
		return ;
	if (lst->content)
		ft_putendl(lst->content);
	if (lst->next)
		ft_putendl_lst(lst->next);
}
