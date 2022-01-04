FLAGS	=	-Wall -Wextra -Werror
NAME	=	ZombieHorde
CC		=	g++
SRC		=	Zombie.cpp \
			ZombieHorde.cpp \
			main.cpp
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
