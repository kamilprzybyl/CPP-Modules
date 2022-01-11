CC		=	clang++
CFLAGS	=	-Wall -Wextra -Werror -I ./inc
OUT		=	brain
SRC		=	main.cpp \
			Animal.cpp \
			Dog.cpp \
			Cat.cpp \
			WrongAnimal.cpp \
			WrongCat.cpp
OBJ		=	$(SRC:.cpp=.o)

all: $(OUT)

%.o : src/%.cpp
	$(CC) $(CFLAGS) -c -o $@ $<

$(OUT): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@

clean:
	rm -fr $(OBJ)

fclean:
	make clean
	rm -fr $(OUT)

re: fclean all
