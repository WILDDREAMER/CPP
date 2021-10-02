NAME	=	moarbrainz
SRC		=	main.cpp Zombie.cpp ZombieHorde.cpp
OBJ		=	moarbrainz.o

all		:	$(NAME)
$(NAME) : $(SRC)
		clang++  -Wall -Wextra -Werror  $(SRC) -o $(NAME)
clean	:
		rm -f $(NAME)
fclean	: clean	
re		: fclean
		make all