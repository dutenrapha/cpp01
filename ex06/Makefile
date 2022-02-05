
FLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address
CC = c++
FILE = main.cpp KarenFilter.cpp
INCLUDE = KarenFilter.hpp
NAME = KarenFilter

all: $(NAME)

fclean:
	rm -f $(NAME)
	rm -f *.o

test:
	./$(NAME) DEBUG

re: fclean all test

$(NAME):
	$(CC) $(FLAGS) $(FILE) -I $(INCLUDE) -o $@
