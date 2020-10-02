PATH_SRC = ./src/
HEADER = ./includes/
OPTION = -c -I $(HEADER)
SRC = $(PATH_SRC)ft_putchar.c $(PATH_SRC)ft_putstr.c $(PATH_SRC)ft_strcmp.c $(PATH_SRC)ft_strlen.c $(PATH_SRC)ft_swap.c

all: libft.a

libft.a:
	gcc -Wall -Wextra -Werror $(OPTION) $(SRC)
	ar rc $(NAME) $(OBJ)

clean:
	/bin/rm -f ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
fclean: clean
	/bin/rm -f libft.a

re: fclean all
	
