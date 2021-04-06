/*
** EPITECH PROJECT, 2021
** destroy_all.c
** File description:
** destroy all
*/

#include "rpg.h"

void destroy_buffer(framebuffer_t *buffer)
{
    sfRenderWindow_destroy(buffer->window);
    free(buffer);

}

void destroy_objs(game_object_t **objs)
{
    for (int i = 0; objs[i]; i++) {
        sfSprite_destroy(objs[i]->sprite);
        sfTexture_destroy(objs[i]->texture);
        free(objs[i]);
    }
    free(objs);
}

void destroy_buttons(button_t **buttons)
{
    for (int i = 0; buttons[i]; i++) {
        sfRectangleShape_destroy(buttons[i]->rect);
        sfTexture_destroy(buttons[i]->texture);
        if (buttons[i]->text != NULL && buttons[i]->font != NULL) {
            sfFont_destroy(buttons[i]->font);
            sfText_destroy(buttons[i]->text);
        }
        free(buttons[i]);
    }
    free(buttons);
}

void destroy_all_scene(scene_t *scene)
{
    for (int i = 0; i < 2; i++) {
        destroy_objs(scene[i].objs);
        destroy_buttons(scene[i].buttons);
    }
    free(scene);
}

void destroy_all(scene_t *scene, framebuffer_t *buffer)
{
    destroy_all_scene(scene);
    destroy_buffer(buffer);
}