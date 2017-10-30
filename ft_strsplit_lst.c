#include "libft.h"

t_list	*ft_strsplit_lst(char const *s, char c)
{
	int		nbletter;
	t_list	*first;
	t_list	*word;

	if (!(word = ft_lstnew(NULL, 0)))
		return (NULL);
	first = word;
	while (*s)
	{
		while (*s == c)
			s++;
		nbletter = 0;
		while (*s != c && *++s)
			nbletter++;
		if (!*s)
			nbletter++;
		if (!(word->content = ft_strsub(s - nbletter, 0, nbletter)))
			return (NULL);
		word->content_size = nbletter + 1;
		if (!(word->next = ft_lstnew(NULL, 0)))
			return (NULL);
		word = word->next;
	}
	return (first);
}
