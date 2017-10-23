#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "libft.h"
void	try_ft_putchar_fd(char);
void	try_ft_putstr_fd(char *);
void	try_ft_putendl_fd(char *);
void	try_ft_putnbr_fd(int);

int		main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	/*ft_putchar('a');
	ft_putstr("test");
	ft_putendl("test");
	ft_putnbr(-2147483648);
	try_ft_putchar_fd('a');
	try_ft_putstr_fd("test");
	try_ft_putendl_fd("test");*/
	try_ft_putnbr_fd(-2147483648);
return (0);
}

void	try_ft_putnbr_fd(int n)
{
	int fd;

	fd = creat("test ft_putnbr_fd.txt", S_IRWXU);
	ft_putnbr_fd(n, fd);
	close (fd);
}

void	try_ft_putchar_fd(char c)
{
	int fd;
	
	fd = creat("test ft_putchar_fd.txt", S_IRWXU);
	ft_putchar_fd(c, fd);
	close (fd);
}

void	try_ft_putstr_fd(char *s)
{
	int fd;
	
	fd = creat("test ft_putstr_fd.txt", S_IRWXU);
	ft_putstr_fd(s, fd);
	close (fd);
}

void	try_ft_putendl_fd(char *s)
{
	int fd;
	
	fd = creat("test ft_putnbr_fd.txt", S_IRWXU);
	ft_putendl_fd(s, fd);
	close(fd);
}


