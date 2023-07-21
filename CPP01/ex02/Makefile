NAME = stringrf

SRC = main.cpp

OBG = main.o

CPP = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(OBG)
	$(CPP) $(CPPFLAGS) $(OBG) -o $@

$(OBG) :
	$(CPP) $(CPPFLAGS) -c $(SRC)

clean : 
	rm -rf $(OBG)

fclean : clean
	rm -rf $(NAME)

re : fclean all