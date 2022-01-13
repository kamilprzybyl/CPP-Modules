CC		=	clang++
CFLAGS	=	-W -Wall -Werror -I ./inc
OUT		=	aMateria
SRC		=	src/main.cpp \
			src/AMateria.cpp \
			src/Cure.cpp \
			src/Ice.cpp \
			src/Character.cpp \
			src/MateriaSource.cpp
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
