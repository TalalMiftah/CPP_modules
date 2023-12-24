NAME = Bureaucrat

INCLUDE =	Bureaucrat.hpp \
			AForm.hpp \
			ShrubberyCreationForm.hpp \
			RobotomyRequestForm.hpp \
			PresidentialPardonForm.hpp \
			Intern.hpp

SRC =	main.cpp \
		Bureaucrat.cpp \
		AForm.cpp \
		ShrubberyCreationForm.cpp \
		RobotomyRequestForm.cpp \
		PresidentialPardonForm.cpp \
		Intern.cpp

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
