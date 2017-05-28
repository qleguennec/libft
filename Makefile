NAME = libft.a
SRC = ft_atoi.c ft_bytecmp.c ft_bzero.c ft_iqsort.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_islower.c ft_isprint.c ft_isspace.c ft_isupper.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memdup.c ft_memmove.c ft_memset.c ft_min.c ft_nsplit.c ft_null.c ft_only.c ft_qsort.c ft_strchr.c ft_strcmp.c ft_strcpy.c ft_strdup.c ft_strequ.c ft_strlen.c ft_strncmp.c ft_strncpy.c ft_strrchr.c ft_strstr.c ft_tolower.c ft_toupper.c ft_word.c 
OBJ = $(SRC:.c=.o)

CFLAGS += -g -Wall -Wextra -Werror
ARFLAGS = rc

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(ARFLAGS) $@ $(OBJ)

clean:
	@rm $(OBJ) 2> /dev/null || true

fclean: clean
	@rm $(NAME) 2> /dev/null || true

re: fclean all
