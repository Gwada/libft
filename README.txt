Liste des fichiers a rendre


auteur		: ok

Makefile	:

libft.h		:


Part 1

ft_memset	:
ft_bzero	:
ft_memcpy	:
ft_memccpy	:
ft_memmove	:
ft_memchr	:
ft_memcmp	:
ft_strlen	:
ft_strdup	:
ft_strcpy	:
ft_strncpy	:
ft_strcat	:
ft_strncat	:
ft_strlcat	:
ft_strchr	:
ft_strrchr	:
ft_strstr	:
ft_strnstr	:
ft_strcmp	:
ft_strncmp	:
ft_atoi		:
ft_isalpha	:
ft_isdigit	:
ft_isalnum	:
ft_isascii	:
ft_isprint	:
ft_toupper	:
ft_tolower	:


Part 2

void	*ft_memalloc(size_t size);					:
void	ft_memdel(void **ap);						:
char	*ft_strnew(size_t size);					:
void	ft_strdel(char **as);						:
void	ft_strclr(char *s);						:
void	ft_striter(char *s, void (*f)(char *));				:
void	ft_striteri(char *s, void (*f)(unsigned int, char *));		:
char	*ft_strmap(char const *s, char (*f)(char));			:
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));	:
int		ft_strequ(char const *s1, char const *s2);		:
int		ft_strnequ(char const *s1, char const *s2, size_t n);	:
char	*ft_strsub(char const *s, unsigned int start, size_t len);	:
char	*ft_strjoin(char const *s1, char const *s2);			:
char	*ft_strtrim(char const *s);					:
char	**ft_strsplit(char const *s, char c);				:
char	*ft_itoa(int n);						:
void	ft_putchar(char c);						: ok
void	ft_putstr(char const *s);					: ok
void	ft_putendl(char const *s);					: ok
void	ft_putnbr(int n);						:
void	ft_putchar_fd(char c, int fd);					:
void	ft_putstr_fd(char const *s, int fd);				:
void	ft_putendl_fd(char const *s, int fd);				:
void	ft_putnbr_fd(int n, int fd);					:


Bonus

t_list	*ft_lstnew(void const *content, size_t content_size);		:
void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t));	:
void	ft_lstdel(t_list **alst, void (*del)(void *, size_t));		:
void	ft_lstadd(t_list **alst, t_list *new);				:
void	ft_lstiter(t_list *lst, void (*f)(t_list *elem));		:
t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));		:
