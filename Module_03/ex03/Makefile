NAME	=	DiamondTrap
SRC		=	main.cpp FragTrap.cpp ClapTrap.cpp ScavTrap.cpp DiamondTrap.cpp
OBJ		=	DiamondTrap.o

all		:	$(NAME)
$(NAME) : $(SRC)
		clang++  -Wall -Wextra -Werror -std=c++98 $(SRC) -o $(NAME)
clean	:
		rm -f $(NAME)
fclean	: clean	
re		: fclean
		make all