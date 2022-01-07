CFLAGS	=	-Wall -Wextra -Werror
OUT		=	weapon
CC		=	clang++
SRC		=	main.cpp \
			Weapon.cpp \
			HumanA.cpp \
			HumanB.cpp
OBJ		=	$(SRC:.cpp=.o)

all: $(OUT)

$(OUT): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@

clean:
	rm -fr $(OBJ)

fclean:
	make clean
	rm -fr $(OUT)

re: fclean all
