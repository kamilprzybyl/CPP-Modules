CC		=	clang++
CFLAGS	=	-Wall -Wextra -Werror -I ./inc
OUT		=	abstract
SRC		=	src/main.cpp \
			src/Animal.cpp \
			src/Dog.cpp \
			src/Cat.cpp \
			src/Brain.cpp
OBJ		=	$(SRC:.cpp=.o)

all: $(OUT)

%.o : %.cpp
	$(CC) $(CFLAGS) -c -o $@ $<

$(OUT): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@

clean:
	rm -fr $(OBJ)

fclean:
	make clean
	rm -fr $(OUT)

re: fclean all
