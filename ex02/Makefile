NAME = operators

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++17

SRCS = main.cpp Fixed.cpp
OBJS = $(SRCS:%.cpp=%.o)

RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
