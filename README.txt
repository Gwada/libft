Liste des fichiers a rendre


auteur		: ok

Makefile	:

libft.h		:


Part 1

void	*ft_memset(void *s, int c, size_t n);                           : ok
void	ft_bzero(void *s, size_t n);                                    : ok
void	*ft_memcpy(void *dest, const void *src, size_t n);              : ok
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);      : ok
void	*ft_memmove(void *dest, const void *src, size_t n);             : ok
void	*ft_memchr(const void *s, int c, size_t n);                     : ok
int		ft_memcmp(cons void *s1, const void *s2, size_t n);     : ok
size_t	ft_strlen(const char *s);                                       : ok
char	*ft_strdup(const char *s);                                      : ok
char	*ft_strcpy(char *dest, const char *src);                        : ok
char  *ft_strncpy(char *dest, const char *src, size_t n)	        : ok
char	*ft_strcat(char *dest, const char *src);                        : ok
char	*ft_strncat(char *dest, const char *src, size_t n);             : ok
size_t	ft_strlcat(char *dest, const char *src, size_t dstsize);        : ok
char	*ft_strchr(const char *s, int c);                               : ok
char	*ft_strrchr(const char *s, int c);                              : ok
char	*ft_strstr(const char *haystack, const char *needle);           : ok
char	*ft_strnstr(const char *s1, const char *s2, size_t len);        : ok
int		ft_strcmp(const char *s1, const char *s2);              : ok
int		ft_strncmp(const char *s1, const char *s2, size_t n);   : ok
int		ft_atoi(const char *nptr);                              : ok
int		ft_isalpha(int c);                                      : ok
int		ft_isdigit(int c);                                      : ok
int		ft_isalnum(int c);                                      : ok
int		ft_isascii(int c);                                      : ok
int		ft_isprint(int c);                                      : ok
int		ft_toupper(int c);                                      : ok
int		ft_tolower(int c);                                      : ok


Part 2

void	*ft_memalloc(size_t size);					: ok
void	ft_memdel(void **ap);						: ok
char	*ft_strnew(size_t size);					: ok
void	ft_strdel(char **as);						: ok
void	ft_strclr(char *s);						: ok
void	ft_striter(char *s, void (*f)(char *));				: ok
void	ft_striteri(char *s, void (*f)(unsigned int, char *));		: ok
char	*ft_strmap(char const *s, char (*f)(char));			: ok
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));	:
int		ft_strequ(char const *s1, char const *s2);		:
int		ft_strnequ(char const *s1, char const *s2, size_t n);	:
char	*ft_strsub(char const *s, unsigned int start, size_t len);	:
char	*ft_strjoin(char const *s1, char const *s2);			:
char	*ft_strtrim(char const *s);					:
char	**ft_strsplit(char const *s, char c);				: ok
char	*ft_itoa(int n);						: ok
void	ft_putchar(char c);						: ok
void	ft_putstr(char const *s);					: ok
void	ft_putendl(char const *s);					: ok
void	ft_putnbr(int n);						: ok
void	ft_putchar_fd(char c, int fd);					: ok
void	ft_putstr_fd(char const *s, int fd);				: ok
void	ft_putendl_fd(char const *s, int fd);				: ok
void	ft_putnbr_fd(int n, int fd);					: ok


Bonus

t_list	*ft_lstnew(void const *content, size_t content_size);		:
void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t));	:
void	ft_lstdel(t_list **alst, void (*del)(void *, size_t));		:
void	ft_lstadd(t_list **alst, t_list *new);				:
void	ft_lstiter(t_list *lst, void (*f)(t_list *elem));		:
t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));		:
