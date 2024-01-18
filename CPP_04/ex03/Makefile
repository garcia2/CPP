# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/23 18:46:21 by ael-khni          #+#    #+#              #
#    Updated: 2024/01/05 09:45:22 by nicolas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= materia
	
CC			= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98
RM			= rm -rf

INCLUDE		= HPP/

OBJDIR = .objFiles


FILES		=	main				\
				CPP/AMateria		\
				CPP/Character		\
				CPP/Cure			\
				CPP/Ice				\
				CPP/MateriaSource	\


SRC			= $(FILES:=.cpp)

OBJ			= $(addprefix $(OBJDIR)/, $(FILES:=.o))


#Colors:
GREEN		=	\e[92m
YELLOW		=	\e[93m
RESET		=	\e[0m

#Debug 
ifeq ($(DEBUG), 1)
   OPTS = -g
endif


all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(OBJ) -I $(INCLUDE) $(OPTS) -o $(NAME)
	@printf "$(_SUCCESS) $(GREEN)- Executable $@ ready.\n$(RESET)"

$(OBJDIR)/%.o: %.cpp
	@mkdir -p $(dir $@)
	@$(CC) $(FLAGS) -I $(INCLUDE) $(OPTS) -c $< -o $@

clean:
	@$(RM) $(OBJDIR) $(OBJ)
	@printf "$(YELLOW)    - Object files removed.$(RESET)\n"

fclean: clean
	@$(RM) $(NAME)
	@printf "$(YELLOW)    - Executable $@ removed.$(RESET)\n"

re: fclean all

.PHONY: all clean fclean re
