#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int ui;

	ui = 1;
	if (n < 0)
		ft_putchar_fd('-', fd);
	ui = (n < 0) ? -n : n;
	if (ui > 9)
		ft_putnbr_fd(ui / 10, fd);
	ft_putchar_fd(ui % 10 + '0', fd);
}
