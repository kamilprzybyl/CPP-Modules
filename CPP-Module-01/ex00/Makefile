FLAGS	=	-Wall -Wextra -Werror
NAME	=	zombie
CC		=	c++
SRC		=	Zombie.cpp \
			newZombie.cpp \
			randomChump.cpp \
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
