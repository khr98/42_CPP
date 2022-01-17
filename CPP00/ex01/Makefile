NAME = phonebook

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror

OBJS_DIR = ./objs

INCS = ./phonebook.hpp

SRCS =	./main.cpp	\
		./phonebook.cpp

OBJS = $(addprefix $(OBJS_DIR)/, $(notdir $(SRCS:.cpp=.o)))

vpath %.cpp $(SRCS_DIR)

RM = rm -f

all : $(NAME)

$(NAME) : $(OBJS)
	@$(CXX) $(CXXFLAGS) -o $@ $^

$(OBJS_DIR) :
	@mkdir -p $(OBJS_DIR)

$(OBJS_DIR)/%.o : %.cpp | $(OBJS_DIR)
	@$(CXX) $(CXXFLAGS) -o $@ -I./$(INCS) -c $^

clean :
	@$(RM) -r $(OBJS_DIR)

fclean : clean
	@$(RM) $(NAME)

re : fclean all
