SRC 	   = 

SRCBONUS   = 

CC	= gcc

CFLAGS	= -Wall -Wextra -Werror

EXEC	= libftprintf.a

CFILES	= $(SRC:%=%.c)

CBONUS = $(SRCBONUS:%=%.c)

OBJ	= $(SRC:=.o)

OBJBONUS = $(SRCBONUS:=.o)

NAME	= $(EXEC)

$(NAME):
	$(CC) $(CFLAGS) -c $(CFILES) -I./
	ar -rc $(EXEC) $(OBJ)

all: $(NAME)

bonus :
	$(CC) $(CFLAGS) -c $(CBONUS) -I./
	ar -rc $(EXEC) $(OBJBONUS)

clean:
	rm -f $(OBJ)
	rm -f $(OBJBONUS)

fclean: clean
	rm -f $(NAME)
	rm -f $(OBJ)

re: fclean all

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(CFILES) $(CBONUS)
	gcc -nostartfiles -shared -o libft.so $(OBJ) $(OBJBONUS)

.PHONY: all, clean, fclean, re
