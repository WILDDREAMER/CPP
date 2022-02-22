NAME	=	ScavTrap
SRC		=	main.cpp ScavTrap.cpp ClapTrap.cpp
OBJ		=	ScavTrap.o

all		:	$(NAME)
$(NAME) : $(SRC)
		clang++  -Wall -Wextra -Werror  $(SRC) -o $(NAME)
clean	:
		rm -f $(NAME)
fclean	: clean	
re		: fclean
		make all