NAME	=	violence
SRC		=	main.cpp Weapon.cpp HumanA.cpp HumanB.cpp 
OBJ		=	violence.o

all		:	$(NAME)
$(NAME) : $(SRC)
		clang++  -Wall -Wextra -Werror  $(SRC) -o $(NAME)
clean	:
		rm -f $(NAME)
fclean	: clean	
re		: fclean
		make all