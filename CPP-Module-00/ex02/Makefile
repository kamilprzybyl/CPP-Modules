CFLAGS	=	-Wall -Wextra -Werror
OUT		=	account
CC		=	clang++
SRC		=	Account.cpp \
			tests.cpp
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
