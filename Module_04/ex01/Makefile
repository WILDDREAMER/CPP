NAME	=	polymorphism
SRC		=	main.cpp Polymorphism.cpp Brain.cpp
OBJ		=	polymorphism.o

all		:	$(NAME)
$(NAME) : $(SRC)
		clang++  -Wall -Wextra -Werror -std=c++98 $(SRC) -o $(NAME)
clean	:
		rm -f $(NAME)
fclean	: clean	
re		: fclean
		make all