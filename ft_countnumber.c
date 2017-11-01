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
