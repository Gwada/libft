#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	if (!n)
		return (NULL);
	if (*(char*)s != c && n)
		return (ft_memchr((char*)s + 1, c, n - 1));
	return ((char*)s);
}
