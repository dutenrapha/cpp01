
FLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic
CC = c++
FILE = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
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
