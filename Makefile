# Directories
BINDIR		?=	.
SRCDIR		=	src
BUILDDIR	?=	build
INCLUDE		=	includes
NAME		=	libft.a
TARGET		=	$(BINDIR)/$(NAME)

# Compiler options
CC			=	clang
CFLAGS		=	-I$(INCLUDE) -Wall -Wextra -Werror -g

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

# Source files
SRC			+=	ft_atoi.c
SRC			+=	ft_bzero.c
SRC			+=	ft_isalnum.c
SRC			+=	ft_isalpha.c
SRC			+=	ft_isascii.c
SRC			+=	ft_isdigit.c
SRC			+=	ft_islower.c
SRC			+=	ft_isprint.c
SRC			+=	ft_isupper.c
SRC			+=	ft_itoa.c
SRC			+=	ft_max.c
SRC			+=	ft_memalloc.c
SRC			+=	ft_memccpy.c
SRC			+=	ft_memcpy.c
SRC			+=	ft_mempcpy.c
SRC			+=	ft_memchr.c
SRC			+=	ft_memcmp.c
SRC			+=	ft_memdel.c
SRC			+=	ft_memmove.c
SRC			+=	ft_memoffset.c
SRC			+=	ft_memset.c
SRC			+=	ft_pow.c
SRC			+=	ft_putchar.c
SRC			+=	ft_putchar_fd.c
SRC			+=	ft_putendl.c
SRC			+=	ft_putendl_fd.c
SRC			+=	ft_putnbr.c
SRC			+=	ft_putnbr_fd.c
SRC			+=	ft_putstr.c
SRC			+=	ft_putstr_fd.c
SRC			+=	ft_strcat.c
SRC			+=	ft_strchr.c
SRC			+=	ft_strclr.c
SRC			+=	ft_strcmp.c
SRC			+=	ft_strcpy.c
SRC			+=	ft_strdel.c
SRC			+=	ft_strdup.c
SRC			+=	ft_strequ.c
SRC			+=	ft_strfind.c
SRC			+=	ft_striter.c
SRC			+=	ft_striteri.c
SRC			+=	ft_strjoin.c
SRC			+=	ft_strlen.c
SRC			+=	ft_strmap.c
SRC			+=	ft_strmapi.c
SRC			+=	ft_strncat.c
SRC			+=	ft_strncpy.c
SRC			+=	ft_strnequ.c
SRC			+=	ft_strnew.c
SRC			+=	ft_strnstr.c
SRC			+=	ft_strrev.c
SRC			+=	ft_strsplit.c
SRC			+=	ft_strstr.c
SRC			+=	ft_strsub.c
SRC			+=	ft_strtrim.c
SRC			+=	ft_tolower.c
SRC			+=	ft_toupper.c
SRC			+=	ft_strncmp.c
SRC			+=	ft_strrchr.c
SRC			+=	ft_strend.c
SRC			+=	ft_lstnew.c
SRC			+=	ft_lstfoldl.c
SRC			+=	ft_lstmap.c
SRC			+=	ft_lstequ.c
SRC			+=	ft_lstcmp.c
SRC			+=	ft_lstindex.c
SRC			+=	ft_lstrange.c
SRC			+=	ft_putintlst.c
SRC			+=	ft_lstdelone.c
SRC			+=	ft_lstdel.c
SRC			+=	ft_lstiter.c
SRC			+=	ft_lstadd.c
SRC			+=	ft_lstsize.c
SRC			+=	ft_strlcat.c
SRC			+=	ft_isspace.c
SRC			+=	ft_strfind_generic.c
SRC			+=	ft_lstpush.c
SRC			+=	ft_delete.c

OBJECTS		=	$(addprefix $(BUILDDIR)/, $(SRC:%.c=%.o))

all: $(TARGET)

$(BUILDDIR)/%.o: $(SRCDIR)/%.c
	@[ -d $(BUILDDIR) ] || mkdir $(BUILDDIR)
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo $(GREEN)+++ obj: $(YELLOW)$(@F)$(END)

$(TARGET): $(OBJECTS)
	@[ -d $(BINDIR) ] || mkdir $(BINDIR)
	@ar rc $(NAME) $(OBJECTS)
	@echo $(GREEN)+++ bin: $(BLUE)$(NAME)$(END)

.PHONY: clean
clean:
	@rm -f $(OBJECTS)
	@echo $(RED)--- obj: $(YELLOW)$(OBJECTS:$(BUILDDIR)/%=%)$(END)
	@[ "$(find $(BUILDDIR) -maxdepth 0 -empty)" ] || rm -r $(BUILDDIR)

.PHONY:	fclean
fclean: clean
	@rm -f $(TARGET)
	@echo $(RED)--- bin: $(BLUE)$(NAME)$(END)

.PHONY: re
re: fclean all

.PHONY: test
test:
	@test/test.sh $(ARGS)

get-%:
	@echo '$($*)'
