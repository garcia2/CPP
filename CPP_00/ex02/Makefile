NAME		= account
INCLUDES	= HPP/

SRCS		=	tests.cpp		\
				CPP/Account.cpp	\
			

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
