# Nom de l'exécutable
NAME = phonebook

# Fichiers source
SRC = main.cpp Contact.cpp PhoneBook.cpp

# Objets compilés
OBJ = $(SRC:.cpp=.o)

# Compilateur et flags
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Règles
all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
