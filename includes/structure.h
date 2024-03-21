/*
** EPITECH PROJECT, 2023
** STRUCTURE
** File description:
** STRUCTURE
*/

#ifndef HUNTER
    #define HUNTER
    #include "my.h"

typedef struct {
    sfRenderWindow *window;
    sfVector2i mouse_pos;
} gameWindow_t;

typedef struct {
    sfSprite *sprite;
    sfTexture *texture;
    sfIntRect rect;
    sfClock *animation_clock;
    sfClock *movement_clock;
    sfVector2f position;
    int score;
} duck_t;

typedef struct {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f position;
} background_t;

typedef struct {
    sfMusic *music;
} gameMusic_t;

#endif /* !HUNTER */
