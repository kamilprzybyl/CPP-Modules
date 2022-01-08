CFLAGS	=	-Wall -Wextra -Werror
OUT		=	ScavTrap
CC		=	clang++
SRC		=	main.cpp \
			ClapTrap.cpp \
			ScavTrap.cpp
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
