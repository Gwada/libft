#include "libft.h"

int		ft_countwords(const char *s, const char c, size_t state)
{
	if (!s || !*s)
		return (0);
	if (*s != c)
	{
		if (!state)
			return (ft_countwords(s + 1, c, 1) + 1);
		return (ft_countwords(s + 1, c, 1));
	}
	return(ft_countwords(s + 1, c, 0));
}
