NAME = Fixed
CC = c++
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

SRCS = main.cpp Fixed.cpp
OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp Fixed.hpp
		$(CC) $(CFLAGS) -c $< -o $@

clean :
		$(RM) $(OBJS)

fclean :
		$(RM) $(OBJS) $(NAME)

re : fclean all