NAME = phonebook

SRC = PhoneBook.cpp Contact.cpp main.cpp

OBG =  $(SRC:%.cpp=%.o)

INCLUDE = PhoneBook.hpp Contact.hpp

CCP = c++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

all : $(NAME)

$(NAME) : $(OBG)
	$(CCP) $(CCPFLAGS) $(OBG) -o $(NAME)

%.o : %.cpp $(INCLUDE)
	$(CCP) -c $(CPPFLAGS) $<

clean :
	rm -rf $(OBG)

fclean : clean
	rm -rf $(NAME)

re : fclean all