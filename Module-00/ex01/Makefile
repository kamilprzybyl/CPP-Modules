FLAGS	=	-Wall -Wextra -Werror
NAME	=	phonebook
CC		=	g++
SRC		=	main.cpp \
			phonebook.cpp \
			contact.cpp
OBJ		=	$(SRC:.cpp=.o)

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRC) -o $@

clean:
	rm -fr $(OBJ)

fclean:
	make clean
	rm -fr $(NAME)

re: fclean all
