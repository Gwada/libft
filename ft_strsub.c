#include "libft.h"

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	char *newstr;

	if (!(newstr = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	return(ft_strncpy(newstr, s + start, len));
}
