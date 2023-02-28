NAME = PhoneBook
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -Wshadow
RM = rm -rf

SRCS = Contact.cpp \
		main.cpp \
		PhoneBook.cpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp PhoneBook.hpp
		$(CC) $(CFLAGS) -c $< -o $@

clean :
		$(RM) $(OBJS)

fclean :
		$(RM) $(OBJS) $(NAME)

re : fclean all