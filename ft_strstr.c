#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	if (*haystack && *needle)
	{
		if (ft_strncmp(haystack, needle, ft_strlen(needle)))
			return(ft_strstr(haystack + 1, needle));
		else
			return((char*)haystack);
	}
	return ((*needle) ? NULL : (char*)haystack);
}
