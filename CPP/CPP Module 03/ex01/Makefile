NAME = ScavTrap

SRCS = ClapTrap.cpp ScavTrap.cpp main.cpp

OBJS = ${SRCS:.cpp=.o}

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

.cpp.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.cpp=.o)
	@echo "Compiled $< to $(<:.cpp=.o)"

$(NAME): $(OBJS)
	$(CC) $(OBJS) $(CFLAGS) -o $(NAME)
	@echo "Linked $(OBJS) to create $(NAME)"

clean:
	@$(RM) $(OBJS)
	@echo "Cleaned object files"

fclean: clean
	@$(RM) $(NAME)
	@echo "Cleaned object files and executable"

re: fclean all
	@echo "Rebuilt all targets"

.PHONY: all clean fclean re