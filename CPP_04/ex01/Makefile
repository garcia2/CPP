NAME		= animals
SRCSDIR		= .
OBJSDIR		= objs
INCLUDES	= .

SRCS		= main.cpp	\
			Animal.cpp	\
			Dog.cpp		\
			Cat.cpp		\
			Brain.cpp

CC			= clang++
CFLAGS		= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRCSDIR)/$(SRCS)
	@echo "Assembling $@"
	@$(CC) $(CFLAGS) -o $@ $^

clean:

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re test
