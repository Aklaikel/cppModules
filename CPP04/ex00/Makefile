NAME = exec
TEST = test
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
CC = c++

SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp
SRCS_T = maintest.cpp WrongAnimal.cpp WrongCat.cpp
OBJS = $(SRCS:.cpp=.o)
OBJS_T = $(SRCS_T:.cpp=.o)

all: $(NAME)
test: $(TEST)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(TEST): $(OBJS_T)
	$(CC) $(CFLAGS) $(OBJS_T) -o $(TEST)

%.o:%.cpp Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS) $(OBJS_T)

fclean: clean
	$(RM) $(NAME) $(TEST)

re: fclean all