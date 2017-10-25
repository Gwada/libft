#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		i;
	size_t		j;

	i = ft_strlen(dst);
	j = -1;
	while (i + ++j < dstsize - 1 && src[j])
		dst[i + j] = src[j];
	dst[i + j] = '\0';
	return (i + ft_strlen(src));
}
