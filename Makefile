##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## makefile
SRC_DIR=	$(realpath ../src)

# Must list all project files without the main() function
# Criterion uses its own main() ;
# having a main() in any .c file will have the build fail
SRC=		$(SRC_DIR)/bombyx.c

SRC_UT_DIR=	$(realpath .)

# Must list all files containing unit tests
SRC_UT=		$(SRC_UT_DIR)/test_step01.c \
		$(SRC_UT_DIR)/test_step02.c \
		$(SRC_UT_DIR)/test_step03.c \
		$(SRC_UT_DIR)/test_step04.c \
		$(SRC_UT_DIR)/test_step05.c \

OBJ=		$(SRC:.c=.o) $(SRC_UT:.c=.o)

CFLAGS=		-Wall -Wextra --coverage

LDFLAGS=	-lcriterion -lgcov

NAME=		UNITS

all:		$(NAME)

$(NAME):	$(OBJ)
		cd $(SRC_DIR)
		cc -o $(NAME) $(OBJ) $(LDFLAGS)
		./$(NAME)

clean:
		rm -rf $(SRC_DIR)/*.o*
		rm -rf $(SRC_UT_DIR)/*.o*
		rm -rf $(SRC_DIR)/*.gc*
		rm -rf $(SRC_UT_DIR)/*.gc*
		rm -rf $(SRC_DIR)/lib/my/*.o
		rm -rf $(SRC_DIR)/lib/my/*.gc*

fclean:	clean
		rm -f $(NAME)

re:		fclean all
