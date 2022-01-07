CFLAGS	=	-Wall -Wextra -Werror
OUT		=	replace
CC		=	clang++
SRC		=	main.cpp \
			Sed.cpp
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
