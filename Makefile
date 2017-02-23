NAME = libft.a
SRC = $(filter %.c, $(shell ls))
OBJ = $(SRC:.c=.o)

CFLAGS += -g -std=c99 -pedantic -Wall -Wextra -Werror
ARFLAGS +=

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(ARFLAGS) $@ $(OBJ)

clean:
	@rm $(OBJ) 2> /dev/null || true

fclean: clean
	@rm $(NAME) 2> /dev/null || true

re: fclean all
