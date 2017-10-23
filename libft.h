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

void	ft_putchar(char);


#endif
