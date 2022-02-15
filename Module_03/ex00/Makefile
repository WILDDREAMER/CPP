NAME	=	ClapTrap
SRC		=	main.cpp ClapTrap.cpp
OBJ		=	ClapTrap.o

all		:	$(NAME)
$(NAME) : $(SRC)
		clang++  -Wall -Wextra -Werror  $(SRC) -o $(NAME)
clean	:
		rm -f $(NAME)
fclean	: clean	
re		: fclean
		make all