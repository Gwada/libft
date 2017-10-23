#include "libft.h"

char	*strncat(char *dest, const char *src, size_t n)
{
	size_t	dest_len;
	size_t	i;

	i = -1;
	dest_len = ft_strlen(dest);
	while (++i < n && src[i])
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}
