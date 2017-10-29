NAME	= libft.a
GCC		= gcc -c
FLAGS	= -Wall -Wextra -Werror
HEADER	= libft.h
SRC_C	= $(wildcard *.c)
SRC_O	= $(SRC_C:.c=.o)

all: $(NAME)

$(NAME):
	$(GCC) $(FLAGS) $(SRC_C) $(HEADER)
	ar rc $(NAME) $(SRC_O)
	ranlib $(NAME)

clean:
	rm -f $(SRC_O)
	rm -f libft.h.gch

fclean:	clean
		rm -f $(NAME)

re: fclean all
