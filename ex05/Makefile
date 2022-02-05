
FLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic
CC = c++
FILE = main.cpp Karen.cpp
NAME = main

all: $(NAME)

fclean:
	rm -f $(NAME)
	rm -f *.o

test:
	./$(NAME)

re: fclean all test

$(NAME):
	$(CC) $(FLAGS) $(FILE) -o $@
