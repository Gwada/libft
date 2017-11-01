#include "libft.h"

char	*ft_itoa(int n)
{
	int				number;
	char			*sn;
	unsigned int	ui;

	number = ft_countnumber(n);
	if (!(sn = (char*)malloc(sizeof(char) * (number + 1))))
		return (NULL);
	sn[number] = '\0';
	ui = (n < 0) ? -n : n;
	while (--number >= 0)
	{
		if (!number && n < 0)
			sn[number] = '-';
		else
			sn[number] = ui % 10 + '0';
		ui /= 10;
	}
	return (sn);
}
