NAME = easyfind

INCLUDE = easyfind.hpp

SRC = main.cpp

OBG = $(SRC:%.cpp=%.o)

CPP = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

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
