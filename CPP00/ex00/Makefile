NAME = megaphone

SRC = megaphone.cpp

CCP = c++

CCPFLAGS = -Wall -Wextra -Werror

OBG = megaphone.o

all : $(NAME)
$(NAME) : $(OBG)
	$(CCP) $(CCPFLAGS) $(OBG) -o $(NAME)

$(OBG) : $(SRC)
	$(CCP) $(CCPFLAGS) -c $(SRC)

clean :
	rm -rf $(OBG)

fclean : clean
	rm -rf $(NAME)

re : fclean all