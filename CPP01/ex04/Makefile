NAME = replace
SRC = main.cpp 
OBJ = $(SRC:.cpp=.o)
CC = c++
RM = rm -f
CPPFLAGS = -Wall -Wextra -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp
		$(CXX) $(CPPFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)


fclean: clean
	$(RM) $(NAME)


re: fclean all