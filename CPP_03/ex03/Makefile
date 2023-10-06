NAME		= clapTrap
INCLUDES	= HPP/

SRCS		= 	main.cpp			\
				CPP/ClapTrap.cpp	\
				CPP/ScavTrap.cpp	\
				CPP/FragTrap.cpp	\
				CPP/DiamondTrap.cpp	\

CC			= clang++
CFLAGS		= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRCS)
	@echo "Assembling $@"
	@$(CC) $(CFLAGS) -I $(INCLUDES) -o $@ $^

clean:

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re test
