/*
** EPITECH PROJECT, 2021
** fight_callback.c
** File description:
** fight callback
*/

#include "rpg.h"

void run_action(int *current_scene, scene_t *scene, framebuffer_t *buffer)
{
    int nb = rand() % 2;

    if (nb == 1)
        switch_to_game(current_scene, scene, buffer);
}