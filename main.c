#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "libft.h"
int		FD = 0;
char	DEST[15];
char	*SRC = "ceci est un test";
void	try_ft_putchar_fd(char);
void	try_ft_putstr_fd(char *);
void	try_ft_putendl_fd(char *);
void	try_ft_putnbr_fd(int);

int		main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	//ft_putnbr(ft_strlen("123456"));	test ft_strlen
	ft_putstr(ft_strncpy(DEST, SRC, 10));
	/*ft_putchar('a');
	ft_putstr("test");
	ft_putendl("test");
	ft_putnbr(-2147483648);
	try_ft_putchar_fd('a');
	try_ft_putstr_fd("test");
	try_ft_putendl_fd("test");
	try_ft_putnbr_fd(-2147483648);
	ft_putstr(ft_itoa(-2147483648));*/
	return (0);
}

void	try_ft_putnbr_fd(int n)
{
	FD = creat("test ft_putnbr_fd.txt", S_IRWXU);
	ft_putnbr_fd(n, FD);
	close (FD);
}

void	try_ft_putchar_fd(char c)
{
	FD = creat("test ft_putchar_fd.txt", S_IRWXU);
	ft_putchar_fd(c, FD);
	close (FD);
}

void	try_ft_putstr_fd(char *s)
{
	FD = creat("test ft_putstr_fd.txt", S_IRWXU);
	ft_putstr_fd(s, FD);
	close (FD);
}

void	try_ft_putendl_fd(char *s)
{
	FD = creat("test ft_putnbr_fd.txt", S_IRWXU);
	ft_putendl_fd(s, FD);
	close(FD);
}
