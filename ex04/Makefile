
FLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic
CC = g++
FILE = main.cpp 
NAME = sedIsforLosers

all: $(NAME)

fclean:
	rm -f $(NAME)
	rm -f *.o

test:
	./$(NAME) text LARANJA laranja

re: fclean all test

$(NAME):
	$(CC) $(FLAGS) $(FILE) -o $@
