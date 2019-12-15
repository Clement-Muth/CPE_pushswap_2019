##
## EPITECH PROJECT, 2019
## CPE_pushswap_2019
## File description:
## Makefile
##

BIN		=	push_swap

SRC		= 		src/main.c

OBJ	= $(SRC:.c=.o)

CFLAGS += -Wall -Wextra -I include -Wno-unused-result
CFLAGS += -O2

all	: 	$(BIN)

$(BIN): 	$(OBJ)
			make -C lib/pushswap/
			make -C lib/my/
			$(CC) $(OBJ) -lpushswap -Llib/ -lmy -Llib $(CFLAGS) -o $(BIN)

clean	:
		rm -f $(OBJ)

fclean	:	clean
			make -C lib/pushswap/ fclean
			make -C lib/my/ fclean
			rm -f $(BIN)

re	:	fclean all

.PHONY :	all clean fclean re