NAME = Harl
SRC = main.cpp Harl.cpp
OBJ = $(SRC:.cpp=.o)
CC = c++
RM = rm -f
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp Harl.hpp
		$(CXX) $(CPPFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)


fclean: clean
	$(RM) $(NAME)


re: fclean all