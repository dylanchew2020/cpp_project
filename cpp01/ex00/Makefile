#  |  |  ___ \    \  |         |
#  |  |     ) |  |\/ |   _  |  |  /   _
# ___ __|  __/   |   |  (   |    <    __/
#    _|  _____| _|  _| \__,_| _|\_\ \___|
#                              by jcluzet
################################################################################
#                                     CONFIG                                   #
################################################################################

NAME		:= Zombie
CC			:= clang++
FLAGS		:= -std=c++98 -g -fcolor-diagnostics -fsanitize=address \
				-Wall -Wextra -Werror
OUTPUT		:= $(NAME).log

################################################################################
#                               PROGRAM'S INCLUDES                             #
################################################################################

INC_DIR		= includes
INC			= -I./$(INC_DIR)

################################################################################
#                                 PROGRAM'S SRCS                               #
################################################################################

SRC_DIR		:= .
SRC			:= $(addsuffix .cpp, \
					main \
					Zombie \
					newZombie \
					randomChump)

OBJ_DIR		:= .
OBJ			:= $(SRC:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@ $(CC) $(FLAGS) $(INC) -c $< -o $@
	@ printf "$(YELLOW)$<$(CLR_RMV)... "

################################################################################
#                                  Makefile  objs                              #
################################################################################

CLR_RMV		:= \033[0m
RED		    := \033[1;31m
GREEN		:= \033[1;32m
YELLOW		:= \033[1;33m
BLUE		:= \033[1;34m
CYAN 		:= \033[1;36m
RM			:= rm -f

$(NAME): $(OBJ)
	@ echo "\n$(GREEN)Compilation $(CLR_RMV)of $(BLUE) $(NAME) $(CLR_RMV)..."
	@ $(CC) $(FLAGS) $(OBJ) -o $(NAME)
	@ echo "$(GREEN)[Success] $(BLUE)$(NAME) $(CLR_RMV)created ✔️"
	@ ./$(NAME) > $(NAME).log

all: $(NAME)

run:
	@ ./$(NAME)

clean:
	@ $(RM) *.o
	@ echo "$(RED)Deleting $(BLUE)$(NAME) $(CLR_RMV)objs ✔️"

fclean: clean
	@ $(RM) $(NAME) $(NAME).log
	@ echo "$(RED)Deleting $(BLUE)$(NAME) $(CLR_RMV)binary ✔️"

re:			fclean all

.PHONY:		all clean fclean re

.PRECIOUS:	$(NAME) $(OBJ)
