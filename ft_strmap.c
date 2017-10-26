#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*newstr;
	size_t	i;

	i = -1;
	if (!s || !f)
		return (NULL);
	if (!(newstr = (char*)malloc(sizeof(newstr) * ft_strlen(s) + 1)))
		return (NULL);
	while (s[++i])
		newstr[i] = f(s[i]);
	newstr[i] = '\0';
	return (newstr);
}
