NAME	=	Serialization
SRC		=	main.cpp Serialization.cpp
OBJ		=	Serialization.o

all		:	$(NAME)
$(NAME) : $(SRC)
		clang++  -Wall -Wextra -Werror -std=c++98 $(SRC) -o $(NAME)
clean	:
		rm -f $(NAME)
fclean	: clean	
re		: fclean
		make all