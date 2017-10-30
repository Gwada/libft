#include "libft.h"

void	ft_putlst(t_list *lst, void (*f)(char const *))
{
	if (!lst)
		return ;
	if (lst->content)
		f(lst->content);
	if (lst->next)
		ft_putlst(lst->next, f);
}
