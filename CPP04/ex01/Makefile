NAME = exec
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
CC = c++

SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp
OBJS = $(SRCS:.cpp=.o)
OBJS_T = $(SRCS_T:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o:%.cpp Animal.hpp Cat.hpp Dog.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS) $(OBJS_T)

fclean: clean
	$(RM) $(NAME) $(TEST)

re: fclean all