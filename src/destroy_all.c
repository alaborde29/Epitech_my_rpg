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
    sfView_destroy(buffer->view);
    sfView_destroy(buffer->initial_view);
    free(buffer);
}

void destroy_objs(game_object_t **objs)
{
    int i = 0;

    for (i = 0; objs[i]; i++) {
        sfSprite_destroy(objs[i]->sprite);
        sfTexture_destroy(objs[i]->texture);
        if (objs[i]->clock != NULL)
            sfClock_destroy(objs[i]->clock);
        free(objs[i]);
    }
    free(objs);
}

void destroy_buttons(button_t **buttons)
{
    int i = 0;

    for (i = 0; buttons[i]; i++) {
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
    for (int i = 0; i < 6; i++) {
        destroy_objs(scene[i].objs);
        destroy_buttons(scene[i].buttons);
        if (scene[i].music != NULL)
            sfMusic_destroy(scene[i].music);
    }
    free(scene);
}

void destroy_all(scene_t *scene, framebuffer_t *buffer, game_t *game)
{
    destroy_all_scene(scene);
    destroy_buffer(buffer);
    destroy_player(game->player);
    destroy_starter(game->starter);
    destroy_fight(game->fight);
    free(game->fight);
    free(game);
}