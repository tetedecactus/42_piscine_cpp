YELLOW 	= \033[0;33m
GREEN 	= \033[0;32m
RED 	= \033[0;31m
END 	= \033[0m

NAME = sed4losers

CC = clang++

# add this flags for evaluation: -std=c++98
CFLAGS = -Wall -Wextra -Werror 

SRC = 	main.cpp \

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
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