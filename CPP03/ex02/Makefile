NAME = exec
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
CC = c++

SRCS = main.cpp ClapTrap.cpp FragTrap.cpp ScavTrap.cpp 
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o:%.cpp ClapTrap.hpp FragTrap.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all