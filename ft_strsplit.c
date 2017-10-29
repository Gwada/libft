#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int		nbwords;
	int		nbletter;
	char	**words;

	nbwords = ft_countwords(s, c, 0);
	if (!(words = (char**)malloc(sizeof(char*) * nbwords + 1)))
		return (NULL);
	words[nbwords] = '\0';
	while (*s)
	{
		while (*s == c)
			s++;
		nbletter = 0;
		while (*s != c && *++s)
			nbletter++;
		if (!*s)
			nbletter++;
		*words++ = ft_strsub(s - nbletter, 0, nbletter);
	}
	return (words - nbwords);
}
