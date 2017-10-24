#include "libft.h"

int		ft_countnumber(int n)
{
	int				number;
	unsigned int	ui;

	number = 1;
	if (n < 0)
		number++;
	ui = (n < 0) ? -n : n;
	while (ui > 9)
	{
		number++;
		ui /= 10;
	}
	return (number);
}

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
