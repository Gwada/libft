#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	if (*haystack && *needle)
	{
		if (ft_strncmp(haystack, needle, len))
			return(ft_strnstr(haystack + 1, needle, len));
		else
			return((char*)haystack);
	}
	return ((*needle) ? NULL : (char*)haystack);
}

