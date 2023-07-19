NAME = phonebook

SRC = phonebook.cpp

OBG =  $(SRC:%.cpp=%.o)

CCP = c++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

all : $(NAME)

$(NAME) : $(OBG)
	$(CCP) $(CCPFLAGS) $(OBG) -o $(NAME)

%.o : %.c
	$(CCP) -c $(CFALGS) $<

clean :
	rm -rf $(OBG)

fclean : clean
	rm -rf $(NAME)

re : fclean all