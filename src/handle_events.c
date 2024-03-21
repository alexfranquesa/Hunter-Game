/*
** EPITECH PROJECT, 2023
** handel_events
** File description:
** hunter
*/

#include "../includes/my.h"

void handle_events(gameWindow_t *gameWindow, duck_t *duck)
{
    sfEvent event;
    sfFloatRect duck_bounds;

    while (sfRenderWindow_pollEvent(gameWindow->window, &event)) {
        if (event.type == sfEvtClosed ||
        sfKeyboard_isKeyPressed(sfKeyEscape)) {
            sfRenderWindow_close(gameWindow->window);
        }
        gameWindow->mouse_pos = sfMouse_getPositionRenderWindow
        (gameWindow->window);
        duck_bounds = sfSprite_getGlobalBounds(duck->sprite);
        if (sfFloatRect_contains(&duck_bounds,
        gameWindow->mouse_pos.x, gameWindow->mouse_pos.y) &&
            sfMouse_isButtonPressed(sfMouseLeft)) {
            duck->position.x = rand() % 500;
            duck->position.y = rand() % 500;
            sfSprite_setPosition(duck->sprite, duck->position);
        }
    }
}
