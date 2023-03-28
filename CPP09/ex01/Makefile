NAME = RPN	
SRC = main.cpp \
	  RPN.cpp 
OBJ = $(SRC:.cpp=.o)
CFLAGS = -Wall -Wextra -Werror  -std=c++98
CC = c++
INCLUDES = RPN.hpp

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(INCLUDES)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all