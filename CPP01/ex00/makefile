NAME = zombie

INCLUDE = Zombie.hpp

SRC =	main.cpp \
		Zombie.cpp \
		newZombie.cpp \
		randomChump.cpp 

OBG = $(SRC:%.cpp=%.o)

CCP = c++

CCPFLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(OBG)
	$(CCP) $(CCPFLAGS) $(OBG) -o $(NAME)

%.o : %.cpp $(INCLUDE)
	$(CCP) $(CCPFLAGS) -c $<

clean :
	rm -rf $(OBG)

fclean : clean
	rm -rf $(NAME)

re : fclean all