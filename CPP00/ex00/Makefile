NAME = megaphone
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -Wshadow
RM = rm -rf

SRCS = megaphone.cpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp 
		$(CC) $(CFLAGS) -c $< -o $@

clean :
		$(RM) $(OBJS)

fclean :
		$(RM) $(OBJS) $(NAME)

re : fclean all