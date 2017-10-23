#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "libft.h"
void	try_ft_putchar_fd(char);

int		main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	//ft_putchar('a');
	//ft_putstr("test");
	//ft_putendl("test");
	//ft_putnbr(-2147483648);
	//try_ft_putchar_fd('a');
	return (0);
}

void	try_ft_putchar_fd(char c)
{
	int fd = creat("ft_putchar_fd.txt", S_IRWXU);
	ft_putchar_fd(c, fd);
	close (fd);
}
