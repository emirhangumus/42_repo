#Standard

NAME		=	libft.a
INCLUDES	=	includes
SRCS_DIR 	=	src/
OBJS_DIR	=	obj/
CC			=	gcc
CFLAGS		=	-Wall -Werror -Wextra -I
RM			=	rm -f
AR			=	ar rcs

#Sources

FTIS_DIR	=	ft_is/
FTIS		=	ft_isalnum ft_isalpha ft_isascii ft_isdigit ft_isprint

FTMEM_DIR	=	ft_mem/
FTMEM		=	ft_bzero ft_calloc ft_memchr ft_memcmp ft_memcpy ft_memmove ft_memset

FTPUT_DIR	=	ft_put/
FTPUT		=	ft_putchar ft_putchar_fd ft_putendl ft_putendl_fd ft_putnbr \
				ft_putnbr_fd ft_putnstr ft_putstr ft_putstr_fd

FTTO_DIR	=	ft_to/
FTTO		=	ft_atoi ft_itoa ft_tolower ft_toupper

FTSTR_DIR	=	ft_str/
FTSTR		=	ft_split ft_strcat ft_strchr ft_strcmp ft_strcpy ft_strdup \
				ft_strjoin ft_strlcat ft_strlcpy ft_strlen ft_strncat \
				ft_strncmp ft_strncpy ft_strnstr ft_strrchr ft_strstr ft_substr

# FTLST_DIR	=	ft_lst/
# FTLST		=	ft_lstadd_back ft_lstadd_front ft_lstclear ft_lstdelone \
# 				ft_lstiter ft_lstlast ft_lstmap ft_lstnew ft_lstsize

SRC_FILES+=$(addprefix $(FTIS_DIR),$(FTIS))
SRC_FILES+=$(addprefix $(FTMEM_DIR),$(FTMEM))
SRC_FILES+=$(addprefix $(FTPUT_DIR),$(FTPUT))
SRC_FILES+=$(addprefix $(FTTO_DIR),$(FTTO))
SRC_FILES+=$(addprefix $(FTSTR_DIR),$(FTSTR))
# SRC_FILES+=$(addprefix $(FTLST_DIR),$(FTLST))

SRCS 		= 	$(addprefix $(SRCS_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJS 		= 	$(addprefix $(OBJS_DIR), $(addsuffix .o, $(SRC_FILES)))

#Colors

DEF_COLOR = \033[0;39m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m

OBJSF		=	.cache_exists

all: $(NAME)

$(NAME): $(OBJSF) $(OBJS)
	@$(AR) $(NAME) $(OBJS)
	@echo "$(GREEN)$(NAME) created$(DEF_COLOR)"

$(OBJSF):
	@mkdir -p $(OBJS_DIR) $(addprefix $(OBJS_DIR), $(FTIS_DIR)) $(addprefix $(OBJS_DIR), $(FTMEM_DIR)) $(addprefix $(OBJS_DIR), $(FTPUT_DIR)) $(addprefix $(OBJS_DIR), $(FTTO_DIR)) $(addprefix $(OBJS_DIR), $(FTSTR_DIR)) $(addprefix $(OBJS_DIR), $(FTLST_DIR))
	@touch $(OBJSF)

$(OBJS_DIR)%.o: $(SRCS_DIR)%.c
	@echo "$(YELLOW)Compiling: $< $(DEF_COLOR)"
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@
	@echo "$(GREEN)$(notdir $<)$(DEF_COLOR)"

clean:
	@$(RM) $(OBJS)
	@$(RM) $(OBJSF)
	@echo "$(RED)$(NAME) objects deleted$(DEF_COLOR)"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(RED)$(NAME) deleted$(DEF_COLOR)"

re: fclean all

.PHONY: all clean fclean re