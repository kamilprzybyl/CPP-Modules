CFLAGS	=	-Wall -Wextra -Werror
OUT		=	DiamondTrap
CC		=	clang++
SRC		=	main.cpp \
			ClapTrap.cpp \
			ScavTrap.cpp \
			FragTrap.cpp \
			DiamondTrap.cpp
OBJ		=	$(SRC:.cpp=.o)

all: $(OUT)

$(OUT): $(OBJ) DiamondTrap.hpp
	$(CC) $(CFLAGS) $(OBJ) -o $@

clean:
	rm -fr $(OBJ)

fclean:
	make clean
	rm -fr $(OUT)

re: fclean all
