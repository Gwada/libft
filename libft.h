#ifndef LIBFT_H
# define LIBFT_H

/*
**	BIBLIOTHEQUES
*/

#include <unistd.h>


/*
**	STRUCTURES
*/

typedef	struct		S_LIST
{
	void			*content;
	size_t			content_size;
	struct	s_list	*next;
}					T_LIST;


/*
**	PROTOTYPES
*/
/* Part1 */

/* Part2 */
void	ft_putchar(char);
void	ft_putstr(char const *);
void	ft_putendl(char const *);

/* Bonus */


#endif
