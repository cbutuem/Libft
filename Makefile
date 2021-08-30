### makefile ###
.c.o:
	gcc -Wall -Wextra -Werror -c -o $@ $<
	
obj = ft_isprint.o ft_putchar_fd.o ft_strlcat.o ft_substr.o ft_atoi.o ft_itoa.o\
 ft_putendl_fd.o ft_strlcpy.o ft_tolower.o ft_bzero.o ft_putnbr_fd.o ft_striteri.o\
 ft_strlen.o ft_toupper.o ft_calloc.o ft_memchr.o ft_putstr_fd.o ft_strmapi.o\
 ft_isalnum.o ft_memcmp.o ft_split.o ft_strncmp.o ft_isalpha.o ft_memcpy.o\
 ft_strchr.o ft_strnstr.o ft_isascii.o ft_memmove.o ft_strdup.o ft_strrchr.o\
 ft_isdigit.o ft_memset.o ft_strjoin.o ft_strtrim.o

NAME := libft.a

all: $(NAME)

$(NAME): $(obj)
	ar rcs libft.a $(obj)

clean:
	rm -f $(obj)

fclean: clean 
	rm -f $(NAME)

re: fclean all 	

