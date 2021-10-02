NAME	=	phoneBook
SRC		=	phoneBook.cpp contact.cpp main.cpp
OBJ		=	phoneBook.o

all		:	$(NAME)
$(NAME) : $(SRC)
		clang++  -Wall -Wextra -Werror  $(SRC) -o $(NAME)
clean	:
		rm -f $(NAME)
fclean	: clean	
re		: fclean
		make all