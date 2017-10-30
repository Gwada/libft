#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include "libft.h"
int		FD = 0;
char	DEST[15];
char	SRC[] = "     \n\n\t\tceci est un test   \n\n\n\t\t\t    ";
char	SRC2[100] = "ceci est un test pour split_lst et le Makefile";
char	**STR;
t_list	*new;
void	try_ft_putchar_fd(char);
void	try_ft_putstr_fd(char *);
void	try_ft_putendl_fd(char *);
void	try_ft_putnbr_fd(int);
void	try_ft_strplit(char *, char);
void	try_ft_atoi(char *);
void	try_ft_bzero(size_t);
void	try_ft_memdel(char *);
void	try_ft_strdel(char *);
void	try_ft_strclr(char *);
void	try_ft_lstnew(void *, size_t);

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
//	ft_putstr(ft_strstr("le papa de sophie mange", "papa de "));
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
//	ft_putstr((char*)ft_memalloc(10));
//	try_ft_memdel(SRC2);
//	ft_putstr(ft_strnew(2));
//	try_ft_strdel(SRC);
//	try_ft_strclr(SRC);
//	ft_striter(SRC, (void*)ft_putendl);
//	ft_putnbr(ft_strequ(SRC, SRC));
//	ft_putnbr(ft_strnequ(SRC, SRC2, 6));
//	ft_putstr(ft_strsub(SRC, 3, 4));
//	ft_putstr(ft_strjoin(SRC, SRC2));
//	ft_putstr(ft_strtrim(SRC));
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
//	try_ft_lstnew(NULL, 0);
//	ft_putnbrendl(846262);
//	ft_printstrsplit_tab(ft_strsplit(SRC2, ' '));
//	ft_putlst(ft_strsplit_lst(SRC2, ' '), ft_putendl);
//	ft_putnbr(ft_lstcount(ft_strsplit_lst(SRC2, ' ')));
//	ft_putlst(ft_piledelone(ft_strsplit_lst(SRC2, ' ')), ft_putendl);
	ft_putlst(ft_filedelone(ft_strsplit_lst(SRC2, ' ')), ft_putendl);
	return (0);
}

void	try_ft_lstnew(void *content, size_t content_size)
{
	new = ft_lstnew(content, content_size);
	ft_putnbr(new->content_size);
	ft_putchar('\n');
	ft_putstr(new->content);
}

void	try_ft_strclr(char *s)
{
	ft_putendl(s);
	ft_strclr(s);
	ft_putendl(s);
}

void	try_ft_strdel(char *s)
{
	ft_putendl(s);
	ft_strdel((char**)s);
	ft_putstr(s);
}

void	try_ft_memdel(char *s)
{
	ft_memdel((void**)s);
	ft_putstr(s);
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
	ft_printstrsplit_tab(ft_strsplit(s, c));
}

void	try_ft_atoi(char *nptr)
{
	ft_putstr("ft_atoi : ");
	ft_putnbrendl(ft_atoi(nptr));
	ft_putstr("atoi : ");
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
