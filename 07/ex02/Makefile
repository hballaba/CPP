NAME = array

OBJECT = main.o

HEADER = Array.hpp

FLAG = -Wextra -Werror -Wall

all: $(NAME)

$(NAME):  $(OBJECT)
	@clang++ -o $@ $^
%.o: %.cpp $(HEADER)
	@clang++ $(FLAG) -c $< -o $@

clean:
	@rm -f $(OBJECT)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re