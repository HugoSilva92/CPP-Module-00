NAME = phonebook
CC = c++
FLAGS = -std=c++98 -g -Wall -Wextra -Werror
SRC = srcs/main.cpp srcs/PhoneBook.cpp srcs/Contact.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	@$(CC) $(FLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all
