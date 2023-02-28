NAME = weapon
SRC = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
OBJ = $(SRC:.cpp=.o)
CC = c++
RM = rm -f
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp HumanA.hpp HumanB.hpp Weapon.hpp
		$(CXX) $(CPPFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)


fclean: clean
	$(RM) $(NAME)


re: fclean all