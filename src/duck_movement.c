/*
** EPITECH PROJECT, 2023
** duck_movement
** File description:
** hunter
*/

#include "../includes/my.h"

void duck_movement(duck_t *duck)
{
    unsigned int duck_movement_time = sfTime_asMilliseconds
    (sfClock_getElapsedTime(duck->movement_clock));

    if (duck_movement_time >= 2) {
        duck->position.x += 2;
        sfSprite_setPosition(duck->sprite, duck->position);
        sfClock_restart(duck->movement_clock);
        if (duck->position.x >= 1600) {
            duck->position.x = 0;
            duck->position.y = rand() % 500;
            sfSprite_setPosition(duck->sprite, duck->position);
        }
    }
}
