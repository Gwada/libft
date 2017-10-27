#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list*new;

	if (!(new = (t_list*)malloc(sizeof(new))))
		return (NULL);
	if (!content)
		new->content = NULL;
	else
	{
		if (!(new->content = (void*)malloc(sizeof(void) * content_size)))
			return (NULL);
		ft_memcpy(new->content, content, content_size);
	}
	new->content_size = !content ? 0 : content_size;
	new->next = NULL;
	return (new);
}
