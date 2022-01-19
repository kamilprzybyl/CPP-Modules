CC		=	clang++
CFLAGS	=	-Wextra -Wall -Werror -I ./
OUT		=	identifyType
SRC		=	main.cpp \
			Base.cpp \
			A.cpp \
			B.cpp \
			C.cpp
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
