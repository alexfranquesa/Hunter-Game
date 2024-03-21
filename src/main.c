/*
** EPITECH PROJECT, 2023
** main
** File description:
** hunter
*/

#include "../includes/my.h"
#include "../includes/structure.h"

int main(int argc, char **argv)
{
    gameWindow_t gameWindow;
    duck_t duck;
    background_t background;
    gameMusic_t gameMusic;

    srand(time(NULL));
    init_window(&gameWindow);
    init_duck(&duck);
    init_background(&background);
    init_music(&gameMusic);
    while (sfRenderWindow_isOpen(gameWindow.window)) {
        handle_events(&gameWindow, &duck);
        duck_animation(&duck);
        duck_movement(&duck);
        sfRenderWindow_clear(gameWindow.window, sfBlack);
        sfRenderWindow_drawSprite(gameWindow.window, background.sprite, NULL);
        sfRenderWindow_drawSprite(gameWindow.window, duck.sprite, NULL);
        sfRenderWindow_display(gameWindow.window);
    }
    return 0;
}
