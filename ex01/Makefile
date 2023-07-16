NAME = phonebook

SRC = test.cpp

OBG = $(SRC:%.cpp=%.o)

CCP = c++

CPPFLAGS = -Wall -Werror -Wextra

$(NAME) : $(OBG)
	$(CCP) $(CCPFLAGS) $(OBG) -o $(NAME)

$(OBG) : $(SRC)
	$(CPP) $(CPPFLAGS) -c $(SRC)