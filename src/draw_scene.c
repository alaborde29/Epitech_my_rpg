/*
** EPITECH PROJECT, 2021
** draw_scene.c
** File description:
** draw scene
*/

#include "rpg.h"

void draw_objs(framebuffer_t *buffer, scene_t *scene, int current_scene)
{
    for (int i = 0; scene[current_scene].objs[i]; i++)
        sfRenderWindow_drawSprite(buffer->window, \
scene[current_scene].objs[i]->sprite, NULL);
}

void draw_buttons(framebuffer_t *buffer, scene_t *scene, int current_scene)
{
    for (int i = 0; scene[current_scene].buttons[i]; i++)
        sfRenderWindow_drawRectangleShape(buffer->window, \
scene[current_scene].buttons[i]->rect, NULL);
    for (int i = 0; scene[current_scene].buttons[i]; i++)
        if (scene[current_scene].buttons[i]->text != NULL)
            sfRenderWindow_drawText(buffer->window, \
scene[current_scene].buttons[i]->text, NULL);
}

//le draw map doit etre déplacé pour eviter de draw sur le player

void draw_scene(framebuffer_t *buffer, scene_t *scene, int current_scene)
{
    draw_objs(buffer, scene, current_scene);
    draw_buttons(buffer, scene, current_scene);
    if (current_scene == 1) {
        draw_map(buffer, scene[1]);
        draw_map_above(buffer, scene[1]);
    }
}