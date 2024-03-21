/*
** EPITECH PROJECT, 2023
** init_duck
** File description:
** hunter
*/

#include "../includes/my.h"

void init_duck(duck_t *duck)
{
    duck->sprite = sfSprite_create();
    duck->texture = sfTexture_createFromFile
    ("./img/duck_blue.png", NULL);
    duck->rect = (sfIntRect){0, 0, 165, 170};
    sfSprite_setTexture(duck->sprite, duck->texture, sfTrue);
    sfSprite_setTextureRect(duck->sprite, duck->rect);
    duck->animation_clock = sfClock_create();
    duck->movement_clock = sfClock_create();
    duck->position.x = 0;
    duck->position.y = rand() % 500;
    sfSprite_setPosition(duck->sprite, duck->position);
}
