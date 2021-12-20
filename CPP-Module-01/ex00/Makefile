FLAGS	=	-Wall -Wextra -Werror
OUT		=	zombie
CC		=	g++
SRC		=	main.cpp \
			newZombie.cpp \
			randomChump.cpp \
			Zombie.cpp
OBJ		=	$(SRC:.cpp=.o)

all: $(OUT)

$(OUT):
	$(CC) $(FLAGS) $(SRC) -o $@

clean:
	rm -fr $(OBJ)

fclean:
	make clean
	rm -fr $(OUT)

re: fclean all
