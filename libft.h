#ifndef LIBFT_H
# define LIBFT_H

/*
**	BIBLIOTHEQUES
*/

#include <unistd.h>
#include <stdlib.h>

/*
**	STRUCTURES
*/

typedef	struct		S_LIST
{
	void			*content;
	size_t			content_size;
	struct	s_list	*next;
}					t_list;

/*
**	PROTOTYPES
*/

/* Part1 */
void	*ft_memset(void *s, int c, size_t n);
void	*ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strncpy(char *dest, const char *src, size_t n);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strncat(char *dest, const char *srx, size_t n);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strstr(const char *haystack, const char *needle);
char	*ft_strnstr(const char *s1, const char *s2, size_t len);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_atoi(const char *nptr);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);


/* Part2 */
void	*ft_memalloc(size_t);
void	ft_memdel(void **);
char	*ft_strnew(size_t);
void	ft_strdel(char **);
void	ft_strclr(char *);
void	ft_striter(char *, void (*f)(char *));
void	ft_striteri(char *, void (*f)(unsigned int, char *));
char	*ft_strmap(char const *, char (*f)(char));
char	*ft_strmapi(char const *, char (*f)(unsigned int, char));
int		ft_strequ(char const *, char const *);
int		ft_strnequ(char const *, char const *, size_t);
char	*ft_strsub(char const *, unsigned int, size_t);
char	*ft_strjoin(char const *, char const *);
char	*ft_strtrim(char const *);
char	**ft_strsplit(char const *, char);
char	*ft_itoa(int);
void	ft_putchar(char);
void	ft_putstr(char const *);
void	ft_putendl(char const *);
void	ft_putnbr(int);
void	ft_putchar_fd(char, int);
void	ft_putstr_fd(char const *, int);
void	ft_putendl_fd(char const *, int);
void	ft_putnbr_fd(int , int);

/* Bonus */
t_list	*ft_lstnew(void const *, size_t);
void	ft_lstdelone(t_list **, void (*del)(void *, size_t));
void	ft_lstdel(t_list **, void (*del)(void *, size_t));
void	ft_lstadd(t_list **, t_list *);
void	ft_lstiter(t_list *, void (*f)(t_list *));
t_list	*ft_lstmap(t_list *, t_list *(*f)(t_list *));

#endif
