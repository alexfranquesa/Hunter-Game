/*
** EPITECH PROJECT, 2023
** init_window
** File description:
** hunter
*/

#include "../includes/my.h"

void init_window(gameWindow_t *gameWindow)
{
    sfVideoMode mode = {1600, 800, 32};

    gameWindow->window = sfRenderWindow_create(mode,
    "My Hunter!", sfResize | sfClose, NULL);
}
