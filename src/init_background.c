/*
** EPITECH PROJECT, 2023
** init_background
** File description:
** hunter
*/

#include "../includes/my.h"

void init_background(background_t *background)
{
    background->sprite = sfSprite_create();
    background->texture = sfTexture_createFromFile
    ("./img/bosque_hunter.jpg", NULL);
    sfSprite_setTexture(background->sprite, background->texture, sfFalse);
    background->position.x = 0;
    background->position.y = 0;
    sfSprite_setPosition(background->sprite, background->position);
}
