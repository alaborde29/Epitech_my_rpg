/*
** EPITECH PROJECT, 2021
** start_game.c
** File description:
** start game
*/

#include "rpg.h"

void start_game(framebuffer_t *buffer, scene_t *scene, game_t *game)
{
    int current_scene = 0;

    sfMusic_play(scene[0].music);
    while (sfRenderWindow_isOpen(buffer->window)) {
        while (sfRenderWindow_pollEvent(buffer->window, &buffer->event)) {
            check_event(buffer, scene, game, &current_scene);
        }
        if (current_scene == 0)
            menu(scene, buffer, &current_scene);
        if (current_scene == 1)
            game_scene(scene, buffer, game, &current_scene);
        if (current_scene == 2)
            pause_scene(scene, buffer, &current_scene);
        if (current_scene == 3)
            fight_scene(scene, buffer, game, &current_scene);
        if (current_scene == 4)
            inventory(scene, buffer, game, &current_scene);
        if (current_scene == 5)
            htp_scene(buffer, scene, &current_scene);
    }
}