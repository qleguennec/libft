# Directories
PROJECT		=	libft
BINDIR		?=	.
BUILDDIR	?=	build
NAME		=	$(BINDIR)/libft.a

# Compiler options
CC			=	clang
CFLAGS		=	-Wall -Wextra -Werror -g

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

FIND		=	find . -maxdepth 1 -printf "%f\n"

SRCEX		=
SRC			=	$(filter-out $(SRCEX), $(filter %.c, $(shell $(FIND) -type f)))
OBJECTS		=	$(addprefix $(BUILDDIR)/, $(SRC:%.c=%.o))

all: $(NAME)

$(BUILDDIR)/%.o: %.c
	@[ -d $(BUILDDIR) ] || mkdir $(BUILDDIR)
	@printf $(YELLOW)$(PROJECT)$(END)'\t'
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJECTS)
	@printf $(YELLOW)$(PROJECT)$(END)'\t'
	@ar rc $(@) $(OBJECTS)
	@echo OK

.PHONY: clean sclean fclean re r

clean:
	@printf $(YELLOW)$(PROJECT)$(END)'\t'
	rm -rf $(BUILDDIR)

sclean:
	@printf $(YELLOW)$(PROJECT)$(END)'\t'
	rm -rf $(OBJECTS)

fclean: clean
	@printf $(YELLOW)$(PROJECT)$(END)'\t'
	rm -rf $(NAME)

r: sclean all

re: fclean all
