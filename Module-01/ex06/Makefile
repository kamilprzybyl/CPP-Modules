CFLAGS	=	-Wall -Wextra -Werror
OUT		=	karenFilter
CC		=	clang++
SRC		=	main.cpp \
			Karen.cpp
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
