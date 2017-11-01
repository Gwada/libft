#include "libft.h"

t_list	*ft_strsplit_pile(const char *s, char c)
{
	int		nbletter;
	t_list	*word;

	word = NULL;
	while (*s)
	{
		while (*s == c)
			s++;
		nbletter = 0;
		while (*s != c && *++s)
			nbletter++;
		if (!*s)
			nbletter++;
		if (!(word = ft_pileaddone(word)))
			return (NULL);
		if (!(word->content = ft_strsub(s - nbletter, 0, nbletter)))
			return (NULL);
		word->content_size = nbletter + 1;
		if (*s && !(word = ft_pileaddone(word)))
			return (NULL);
	}
	return (word);

}

