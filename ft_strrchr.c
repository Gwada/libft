#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	s += (i = ft_strlen(s));
	while (i && *--s != c)
		i--;
	return (!i ? NULL : (char*)s);
}
