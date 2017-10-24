#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	while (n--)
		*((char*)dest + n) = *((char*)src + n);
	return (dest);
}
