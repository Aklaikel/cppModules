
NAME = "walking dead"
CXX = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

SRCS = 	newZombie.cpp \
		randomChump.cpp \
		Zombie.cpp \
		main.cpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
		$(CXX) $(CPPFLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp
		$(CXX) $(CPPFLAGS) -c $< -o $@

clean :
		$(RM) $(OBJS)

fclean :
		$(RM) $(OBJS) $(NAME)

re : fclean all