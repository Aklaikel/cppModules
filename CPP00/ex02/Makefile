NAME = log
CC = c++
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

SRCS = Account.cpp \
		tests.cpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp Account.hpp
		$(CC) $(CFLAGS) -c $< -o $@

clean :
		$(RM) $(OBJS)

fclean :
		$(RM) $(OBJS) $(NAME)

re : fclean all