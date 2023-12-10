NAME = Animal

INCLUDE = Animal.hpp Cat.hpp Dog.hpp Brain.hpp WrongAnimal.hpp WrongCat.hpp

SRC = 	Animal.cpp \
		Cat.cpp \
		Dog.cpp \
		main.cpp \
		WrongAnimal.cpp \
		WrongCat.cpp \
		Brain.cpp

OBG = $(SRC:%.cpp=%.o)

CPP = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98# -fsanitize=address

all : $(NAME)

$(NAME) : $(OBG)
	$(CPP) $(CPPFLAGS) $(OBG) -o $@

%.o : %.cpp $(INCLUDE)
	$(CPP) $(CPPFLAGS) -c $<

clean :
	rm -rf $(OBG)

fclean : clean
	rm -rf $(NAME)

re : fclean all
