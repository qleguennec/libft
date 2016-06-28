# Directories
BINDIR		?=	.
BUILDDIR	?=	build
NAME		=	$(BINDIR)/libft.a

# Compiler options
CC			=	clang
CFLAGS		=	$(addprefix -I,$(INCLUDE)) -Wall -Wextra -Werror -g

# Color output
BLACK		=	"\033[0;30m"
RED			=	"\033[0;31m"
GREEN		=	"\033[0;32m"
YELLOW		=	"\033[1;33m"
BLUE		=	"\033[0;34m"
MAGENTA		=	"\033[0;35m"
CYAN		=	"\033[0;36m"
WHITE		=	"\033[0;37m"
END			=	"\033[0m"

SRC += ft_atoi.c
SRC += ft_bytecmp.c
SRC += ft_bzero.c
SRC += ft_find.c
SRC += ft_isalnum.c
SRC += ft_isalpha.c
SRC += ft_isascii.c
SRC += ft_isdigit.c
SRC += ft_islower.c
SRC += ft_isprint.c
SRC += ft_isspace.c
SRC += ft_isupper.c
SRC += ft_itoa.c
SRC += ft_memalloc.c
SRC += ft_memccpy.c
SRC += ft_memchr.c
SRC += ft_memcmp.c
SRC += ft_memcpy.c
SRC += ft_memdel.c
SRC += ft_memdup.c
SRC += ft_memmove.c
SRC += ft_memnchr.c
SRC += ft_mempcpy.c
SRC += ft_memset.c
SRC += ft_pow.c
SRC += ft_putchar.c
SRC += ft_putchar_fd.c
SRC += ft_putendl.c
SRC += ft_putendl_fd.c
SRC += ft_putnbr.c
SRC += ft_putnbr_fd.c
SRC += ft_putstr.c
SRC += ft_putstr_fd.c
SRC += ft_strcat.c
SRC += ft_strchr.c
SRC += ft_strcmp.c
SRC += ft_strcpy.c
SRC += ft_strdup.c
SRC += ft_strend.c
SRC += ft_strequ.c
SRC += ft_strfind.c
SRC += ft_strlcat.c
SRC += ft_strlen.c
SRC += ft_strncat.c
SRC += ft_strncmp.c
SRC += ft_strncpy.c
SRC += ft_strnew.c
SRC += ft_strnstr.c
SRC += ft_strrchr.c
SRC += ft_strrev.c
SRC += ft_strstr.c
SRC += ft_strtrim.c
SRC += ft_tolower.c
SRC += ft_toupper.c
SRC += ft_wstrlen.c
OBJECTS		=	$(addprefix $(BUILDDIR)/, $(SRC:%.c=%.o))

all: $(NAME)

$(BUILDDIR)/%.o: %.c
	@[ -d $(BUILDDIR) ] || mkdir $(BUILDDIR)
	@echo -n $(YELLOW)$(NAME)$(END)'\t'
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(LIBS) $(OBJECTS)
	@echo -n $(CYAN)$(YELLOW)$(END)'\t'
	ar rc $(@) $(OBJECTS)

.PHONY: clean fclean re

clean:
	@rm -rf build/

fclean: clean
	@rm -rf $(TARGET)

re: fclean all
