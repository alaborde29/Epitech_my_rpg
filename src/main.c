/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "rpg.h"

int main(void)
{
    framebuffer_t *buffer = create_framebuffer((sfVideoMode){1920, 1080, 32});
    scene_t *scene = create_scene(1);

    if (buffer == NULL || scene == NULL)
        return (84);
    init_all_scene(scene);
    start_game(buffer, scene);
    destroy_all(scene, buffer);
    return (0);
}