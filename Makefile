# Directories
BINDIR		?=	.
SRCDIR		?=	src
BUILDDIR	?=	build
INCLUDE		+=	includes
NAME		=	libft.a
TARGET		=	$(BINDIR)/$(NAME)

# Compiler options
CC			=	clang
LIBFLAGS	=	-L$(LIBDIR) $(subst lib,-l,$(LIBSRC))
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
SRC			+=	ft_lstbuild.c
SRC			+=	ft_lstadd_end.c

OBJECTS		=	$(addprefix $(BUILDDIR)/, $(SRC:%.c=%.o))

all: $(TARGET)

$(BUILDDIR)/%.o: $(SRCDIR)/%.c
	@[ -d $(BUILDDIR) ] || mkdir $(BUILDDIR); true
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo $(GREEN)+++ obj:'\t'$(END)$(BUILDDIR)/$(YELLOW)'\t'$(@F)$(END)

$(TARGET): $(LIBS) $(OBJECTS)
	@ar rc $(@) $(OBJECTS)
	@echo $(GREEN)+++ target:'\t'$(END)$(BINDIR)/'\t'$(BLUE)$(NAME)$(END)

.PHONY: clean fclean re deps clean-deps re-deps test purge get-%

clean:
	@rm $(OBJECTS) 2> /dev/null	\
	&& echo $(RED)--- obj:'\t'$(END)$(BUILDDIR)/'\t'$(YELLOW)$(OBJECTS:$(BUILDDIR)/%=%)$(END); true

fclean: clean
	@rm $(TARGET) > /dev/null \
	&& echo $(RED)--- target:'\t'$(END)$(BINDIR)'\t'$(BLUE)$(NAME)$(END); true

re: fclean all

deps: $(addprefix $(DEPSDIR)/, $(LIBSRC))

clean-deps:
	@rm -rf $(DEPSDIR)

re-deps: clean-deps deps

test:
	@test/test.sh $(ARGS)
	@test/test-functions-used.sh

purge:
	@util/purge.sh

get-%:
	@echo '$($*)'
