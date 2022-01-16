CC		=	clang++
CFLAGS	=	-W -Wall -Werror -I ./
OUT		=	bureaucrat
SRC		=	main.cpp \
			Bureaucrat.cpp \
			Form.cpp
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
