#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	size_t	len;

	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!(newstr = (char*)malloc(sizeof(char) * len)))
		return (NULL);
	ft_strcat(newstr, s1);
	ft_strcat(newstr, s2);
	return (newstr);
}
