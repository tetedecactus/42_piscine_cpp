YELLOW 	= \033[0;33m
GREEN 	= \033[0;32m
RED 	= \033[0;31m
END 	= \033[0m

NAME = ex00

CC = c++

# add this flags forxxx evaluation: -std=c++98 -Wall -Wextra -Werror
CFLAGS =  -Werror -Wextra -Wall 

SRC = 	main.cpp \

HEADER = whatever.hpp \

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	@echo "$(YELLOW) Compiling...$(END)"
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "$(END)"

.cpp.o:
	@echo "$(GREEN) Generating obj..."
	$(CC) $(CFLAGS) -c $<
	@echo "$(END)"

clean:
	@echo "$(RED) Cleaning..."
	rm -f $(OBJ)
	@echo "c"

fclean: clean
	@echo "$(RED) Removing executable..."
	rm -f $(NAME)
	@echo "$(END)"

re: fclean all

.PHONY: all re clean fclean