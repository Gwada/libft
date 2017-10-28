#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int		i;
	int		nbwords;
	int		nbletter;
	char	**words;

	i = -1;
	nbwords = ft_countwords(s, c, 0);
	if (!(words = (char**)malloc(sizeof(char*) * nbwords + 1)))
		return (NULL);
	while (++i < nbwords && *s)
	{
		while (*s == c)
			s++;
		nbletter = 0;
		while (*s != c && *++s)
			nbletter++;
		if (!*s)
			nbletter++;
		words[i] = (char*)malloc(sizeof(char) * nbletter + 1);
		ft_strncpy(words[i], s - nbletter, nbletter);
	}
	words[nbwords] = '\0';
	return (words);
}
