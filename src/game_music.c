/*
** EPITECH PROJECT, 2023
** game_music
** File description:
** hunter
*/

#include "../includes/my.h"
#include "../includes/structure.h"

void init_music(gameMusic_t *gameMusic)
{
    gameMusic->music = sfMusic_createFromFile("./music/music.ogg");
    sfMusic_setLoop(gameMusic->music, sfTrue);
    sfMusic_play(gameMusic->music);
}
