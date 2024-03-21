/*
** EPITECH PROJECT, 2022
** Boostrap
** File description:
** step 1 boostrap
*/

#ifndef _MY_H_
    #define _MY_H_

    #include <stdio.h>
    #include <unistd.h>
    #include <stdlib.h>
    #include <SFML/Audio.h>
    #include <SFML/Graphics.h>
    #include <SFML/Window/Event.h>
    #include <SFML/Window/Window.h>
    #include <SFML/Window/Context.h>
    #include <SFML/System/Clock.h>
    #include <SFML/Graphics/Rect.h>
    #include <SFML/System.h>
    #include <time.h>
    #include "structure.h"

void init_window(gameWindow_t *gameWindow);
void init_duck(duck_t *duck);
void handle_events(gameWindow_t *gameWindow, duck_t *duck);
void duck_animation(duck_t *duck);
void duck_movement(duck_t *duck);
void init_background(background_t *background);
void init_music(gameMusic_t *gameMusic);

#endif
