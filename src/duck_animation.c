/*
** EPITECH PROJECT, 2023
** duck_animation
** File description:
** hunter
*/

#include "../includes/my.h"
#include "../includes/structure.h"

void duck_animation(duck_t *duck)
{
    unsigned int duck_animation_time = sfTime_asMilliseconds
    (sfClock_getElapsedTime(duck->animation_clock));

    if (duck_animation_time >= 100) {
        duck->rect.left = (duck->rect.left >= 340) ? 0 :
        (duck->rect.left + 170);
        sfSprite_setTextureRect(duck->sprite, duck->rect);
        sfClock_restart(duck->animation_clock);
    }
}
