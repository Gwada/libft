#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*newstr;
	unsigned int	i;

	i = -1;
	if (!s || !f)
		return (NULL);
	if (!(newstr = (char*)malloc(sizeof(newstr) * ft_strlen(s) + 1)))
		return (NULL);
	while (s[++i])
		newstr[i] = f(i, s[i]);
	newstr[i] = '\0';
	return (newstr);
}
