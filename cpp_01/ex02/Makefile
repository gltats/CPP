# Banner
define T_HEADER

  _  _ ___   _____ _  _ ___ ___   ___ ___   ___ ___    _   ___ _  _ 
 | || |_ _| |_   _| || |_ _/ __| |_ _/ __| | _ / _ \  /_\ |_ _| \| |
 | __ || |    | | | __ || |\__ \  | |\__ \ | _ \   / / _ \ | || .` |
 |_||_|___|   |_| |_||_|___|___/ |___|___/ |___/_|_\/_/ \_\___|_|\_|
                                                                                                     
endef 
export T_HEADER

#Colors------------------------------------------------------------
#\033[38;2;255;0;0m 38;2 indicates 24-bit color mode.
#                   255;0;0 amount of red, green, and blue
CYAN = \033[0;96m
ORANGE = \033[38;2;255;146;3m
RED = \033[38;2;255;0;0m
GREEN = \033[38;2;0;255;0m
RESET = \033[0m
#------------------------------------------------------------------

#Emojis-------------------------
EMOJI_HAPPY := \xF0\x9F\x98\x83
EMOJI_SAD := \xF0\x9F\x98\xA2
EMOJI_CELEBRATE := \xF0\x9F\x8E\x89
EMOJI_CLOCK := \xE2\x8F\xB0
CLEANING_TOOL := \xF0\x9F\xA7\xBD
#--------------------------------

# Binary name
NAME = this_is_brain

# Compiler and flags
CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

#timing
TIMER = sleep 0.5

# Source files
SRC = main.cpp

# Object files
OBJ = $(SRC:.cpp=.o)

all: $(NAME)
                                                                                                                                                            
$(NAME): $(OBJ)
	@echo "$(CYAN)$$T_HEADER$(RESET)"
	@echo "\n"
	@echo "$(EMOJI_CLOCK)$(ORANGE)Compiling philo...$(RESET)"
	@$(TIMER)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "$(EMOJI_HAPPY)$(GREEN)DONE ✓✓$(RESET)"

clean:
	@echo "$(RESET)$(ORANGE)$(CLEANING_TOOL)Cleaning...$(RESET)"
	@rm -f $(OBJ)
	@echo "$(RESET)$(GREEN)CLEANED ✓✓$(RESET)"

fclean: clean
	@echo "$(RESET)$(ORANGE)$(CLEANING_TOOL)Cleaning all...$(RESET)"
	@$(TIMER)
	@rm -f $(NAME)
	@$(TIMER)
	@echo "$(RESET)$(GREEN)ALL CLEANED ✓✓$(RESET)"

re: fclean all


.PHONY: clean fclean re
