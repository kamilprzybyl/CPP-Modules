CC		=	clang++
CFLAGS	=	-W -Wall -Werror -I ./inc
OUT		=	bureaucrat
SRC		=	src/main.cpp \
			src/Bureaucrat.cpp \
			src/Form.cpp \
			src/ShrubberyCreationForm.cpp \
			src/RobotomyRequestForm.cpp \
			src/PresidentialPardonForm.cpp \
			src/Intern.cpp
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
