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
void	try_ft_atoi(char *);



int		main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	/*ft_putnbr(ft_strlen("123456"));
	ft_putstr(ft_strcpy(DEST, SRC));
	ft_putstr(ft_strncpy(DEST, SRC, 10));
	ft_putnbr(ft_strcmp("test","test"));
	try_ft_atoi("\n\n\t\t     -1654egfer265");
	ft_putnbr(ft_isalpha('H'));
	ft_putnbr(ft_isdigit('d'));
	ft_putnbr(ft_isalnum('w'));
	ft_putnbr(ft_isascii(-5));
	ft_putnbr(ft_isprint(' '));
	ft_putchar(ft_toupper('S'));
	ft_putchar(ft_tolower('s'));*/
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



void	try_ft_atoi(char *nptr)
{
	ft_putstr("ft_atoi : ");
	ft_putnbr(ft_atoi(nptr));
	ft_putstr("\natoi : ");
	ft_putnbr(atoi(nptr));
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
