CC		=	clang++
CFLAGS	=	-Wextra -Wall -Werror -I ./
OUT		=	scalarConv
SRC		=	main.cpp \
			Convert.cpp
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
