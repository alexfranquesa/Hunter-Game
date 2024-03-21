##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## hunter
##

SRC				=		src/duck_animation.c		\
						src/duck_movement.c			\
						src/handle_events.c			\
						src/init_background.c		\
						src/init_duck.c				\
						src/init_window.c			\
						src/game_music.c			\
						src/main.c

OBJ 			= 		$(SRC:.c=.o)

NAME 			=		my_hunter

CFLAGS 			= 		-Wextra -Wshadow -W -Wall -I./include/

CSFML_FLAGS 	=		-lcsfml-graphics -lcsfml-window -lcsfml-system
CSFML_FLAGS2	= 		-lcsfml-audio

all: $(NAME)

$(NAME): 		$(OBJ)
		gcc -o $(NAME) $(OBJ) $(CFLAGS) $(CSFML_FLAGS) $(CSFML_FLAGS2)

clean:
		$(RM) -f $(OBJ)
		$(RM) src/*.o

fclean:		clean
		$(RM) $(NAME)

re: 	fclean all
