NAME = exec
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
CXX = c++

SRCS = main.cpp MateriaSource.cpp Ice.cpp AMateria.cpp Cure.cpp Character.cpp
OBJS = $(SRCS:.cpp=.o)
OBJS_T = $(SRCS_T:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CPPFLAGS) $(OBJS) -o $(NAME)

%.o:%.cpp Animal.hpp Cat.hpp Dog.hpp
	$(CXX) $(CPPFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS) $(OBJS_T)

fclean: clean
	$(RM) $(NAME) $(TEST)

re: fclean all