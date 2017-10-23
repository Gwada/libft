#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "libft.h"
void	try_ft_putchar_fd(char);
void	try_ft_putstr_fd(char *);

int		main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	/*ft_putchar('a');
	ft_putstr("test");
	ft_putendl("test");
	ft_putnbr(-2147483648);
	try_ft_putchar_fd('a');*/
	try_ft_putstr_fd("test");
return (0);
}

void	try_ft_putchar_fd(char c)
{
	int fd = creat("test ft_putchar_fd.txt", S_IRWXU);
	ft_putchar_fd(c, fd);
	close (fd);
}
void	try_ft_putstr_fd(char *s)
{
	int fd = creat("test ft_putstr_fd.txt", S_IRWXU);
	ft_putstr_fd(s, fd);
	close (fd);
}
