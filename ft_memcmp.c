#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	if (*(char*)s1 && *(char*)s2 && *(char*)s1 == *(char*)s2 && n)
		return(ft_memcmp((char*)s1 + 1, (char*)s2, n - 1));
	return (*(char*)s1 - *(char*)s2);
}
