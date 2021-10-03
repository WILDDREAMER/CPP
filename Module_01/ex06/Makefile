NAME	=	karenfilter
SRC		=	main.cpp Karen.cpp
OBJ		=	karenfilter.o

all		:	$(NAME)
$(NAME) : $(SRC)
		clang++  -Wall -Wextra -Werror $(SRC) -o $(NAME)
clean	:
		rm -f $(NAME)
fclean	: clean	
re		: fclean
		make all