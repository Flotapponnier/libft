NAME	= libft.a

SRCS =		dynamic_memory_manipulation/ft_calloc.c \
			char_classification/ft_isspace.c \
			char_classification/ft_isalnum.c \
			char_classification/ft_isalpha.c \
			char_classification/ft_isascii.c \
			char_classification/ft_isdigit.c \
			char_classification/ft_isprint.c \
			string_examination/ft_itoa.c \
			memory_manipulation/ft_bzero.c \
			memory_manipulation/ft_memchr.c \
			memory_manipulation/ft_memcmp.c \
			memory_manipulation/ft_memcpy.c \
			memory_manipulation/ft_memmove.c \
			memory_manipulation/ft_memset.c \
			print_file_descriptor/ft_putchar_fd.c \
			print_file_descriptor/ft_putendl_fd.c \
			print_file_descriptor/ft_putnbr_fd.c \
			print_file_descriptor/ft_putstr_fd.c \
			ft_split.c \
			string_examination/ft_atoi.c \
			string_examination/ft_atod.c \
			string_examination/ft_atof.c \
			string_examination/ft_strchr.c \
			string_examination/ft_strdup.c \
			string_examination/ft_strlcat.c \
			string_examination/ft_strlcpy.c \
			string_examination/ft_strlen.c \
			string_examination/ft_strrchr.c \
			string_examination/ft_strncmp.c \
			string_examination/ft_strcmp.c \
			string_examination/ft_strnstr.c \
			ft_strjoin.c \
			ft_striteri.c \
			ft_strmapi.c \
			ft_strtrim.c \
			ft_substr.c \
			char_manipulation/ft_tolower.c \
			char_manipulation/ft_toupper.c \
			list_function/ft_lstnew.c \
			list_function/ft_lstsize.c \
			list_function/ft_lstlast.c \
			list_function/ft_lstadd_back.c \
			list_function/ft_lstdelone.c \
			list_function/ft_lstclear.c \
			list_function/ft_lstiter.c \
			list_function/ft_lstmap.c \
			get_next_line/get_next_line.c \
			get_next_line/my_strjoin.c \
			ft_printf/srcs/ft_printf.c \
			ft_printf/srcs/ft_printf_char.c \
			ft_printf/srcs/ft_printf_digit.c \
			ft_printf/srcs/ft_printf_hexa.c \
			ft_printf/srcs/ft_printf_pointer.c \
			ft_printf/srcs/ft_printf_string.c \
			ft_printf/srcs/ft_printf_unsigned.c \

OBJS	= ${SRCS:.c=.o}

CC		= cc
CFLAGS	= -Wall -Wextra -Werror -g

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar -rcs ${NAME} ${OBJS}

all:		${NAME}

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all
