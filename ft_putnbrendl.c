#include "libft.h"

void	ft_putnbrendl(int n)
{
	unsigned int i;

	i = 1;
	if (n < 0)
		ft_putchar('-');
	i = (n < 0) ? -n : n;
	if (i > 9)
		ft_putnbr(i / 10);
	ft_putchar(i % 10 + '0');
	ft_putchar('\n');
}
