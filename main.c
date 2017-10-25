#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include "libft.h"
int		FD = 0;
char	DEST[15];
char	SRC[30] = "ceci est un test";
char	SRC2[30] = "ceci est un autre test";
char	**STR;
void	try_ft_putchar_fd(char);
void	try_ft_putstr_fd(char *);
void	try_ft_putendl_fd(char *);
void	try_ft_putnbr_fd(int);
void	try_ft_strplit(char *, char);
void	try_ft_atoi(char *);
void	try_ft_bzero(size_t);


int		main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
//	ft_putstr(ft_memset(SRC, '0', 10));
//	try_ft_bzero(5);
//	ft_putstr(ft_memcpy(DEST, SRC, 3));
//	ft_putstr(ft_memccpy(SRC2, SRC, 'i', 12));
//	ft_putstr(ft_memmove(SRC + 5, SRC2, 4));
//	ft_putstr(ft_memchr(SRC, ' ', 16));
//	ft_putnbr(ft_memcmp(SRC2, SRC + 1, 13));
//	ft_putnbr(ft_strlen("123456"));
//	ft_putstr(ft_strdup(SRC));
//	ft_putstr(ft_strcpy(DEST, SRC));
//	ft_putstr(ft_strncpy(DEST, SRC, 10));
//	ft_putstr(ft_strcat(SRC, SRC2));
//	ft_putstr(ft_strncat(SRC, SRC2, 15));
//	ft_putnbr(ft_strlcat(SRC, SRC2, 30));
//	ft_putstr(ft_strchr(SRC, '0'));
//	ft_putstr(ft_strrchr(SRC, 'z'));
//	ft_putstr(ft_strstr("le papa de sophie mange", "papa de su"));
//	ft_putstr(ft_strnstr("phrase test", "", 6));
//	ft_putnbr(ft_strcmp("test","test"));
//	ft_putnbr(ft_strncmp(SRC, SRC2, 12));
//	try_ft_atoi("\n\n\t\t     -1654egfer265");
//	ft_putnbr(ft_isalpha('H'));
//	ft_putnbr(ft_isdigit('d'));
//	ft_putnbr(ft_isalnum('w'));
//	ft_putnbr(ft_isascii(-5));
//	ft_putnbr(ft_isprint(' '));
//	ft_putchar(ft_toupper('S'));
//	ft_putchar(ft_tolower('s'));
//	try_ft_strplit(SRC2, ' ');
//	ft_putstr(ft_itoa(-2147483648));
//	ft_putchar('a');
//	ft_putstr("test");
//	ft_putendl("test");
//	ft_putnbr(-2147483648);
//	try_ft_putchar_fd('a');
//	try_ft_putstr_fd("test");
//	try_ft_putendl_fd("test");
//	try_ft_putnbr_fd(-2147483648);
	return (0);
}

void	try_ft_bzero(size_t n)
{
	bzero(SRC, n);
	ft_bzero(SRC2, n);
	ft_putendl(SRC);
	ft_putendl(SRC2);
}

void	try_ft_strplit(char *s, char c)
{
	STR = ft_strsplit(s, c);
	while (*STR)
		ft_putendl(*(STR++));
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
