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
include src.mk

OBJECTS		=	$(addprefix $(BUILDDIR)/, $(SRC:%.c=%.o))

all: $(TARGET)

$(BUILDDIR)/%.o: $(SRCDIR)/%.c
	@[ -d $(BUILDDIR) ] || mkdir $(BUILDDIR); true
	$(CC) $(CFLAGS) -c $< -o $@
	@echo $(GREEN)+++ obj:'\t'$(END)$(BUILDDIR)/$(YELLOW)'\t'$(@F)$(END)

$(TARGET): $(LIBS) $(OBJECTS)
	ar rc $(@) $(OBJECTS)
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
