#include "libft.h"

int		ft_findfst(char const *s)
{
	int		i;

	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	return (i);
}

int		ft_findend(char const *s)
{
	int		i;

	i = ft_strlen(s) - 1;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i--;
	return (i);
}

char	*ft_strtrim(char const *s)
{
	return (ft_strsub(s, ft_findfst(s), ft_findend(s) - ft_findfst(s) + 1));
}
