/*
** EPITECH PROJECT, 2021
** check_event.c
** File description:
** check event
*/

#include "rpg.h"

void reset_player(game_object_t *obj, int indic)
{
    if (!(indic == 1)) {
        obj->rect.left = 0;
        sfSprite_setTextureRect(obj->sprite, obj->rect);
    }
}

void move_event(scene_t *scene, int current_scene)
{
    int indic = 0;

    if (sfKeyboard_isKeyPressed(sfKeyLeft)) {
        left_move(scene[current_scene].objs[PLAYER]);
        indic = 1;
    }
    if (sfKeyboard_isKeyPressed(sfKeyRight)) {
        right_move(scene[current_scene].objs[PLAYER]);
        indic = 1;
    }
    if (sfKeyboard_isKeyPressed(sfKeyUp)) {
        up_move(scene[current_scene].objs[PLAYER]);
        indic = 1;
    }
    if (sfKeyboard_isKeyPressed(sfKeyDown)) {
        down_move(scene[current_scene].objs[PLAYER]);
        indic = 1;
    }
    reset_player(scene[current_scene].objs[PLAYER], indic);
}

void check_event(framebuffer_t *buffer, scene_t *scene, \
game_t *game, int *current_scene)
{
    if (buffer->event.type == sfEvtClosed)
        sfRenderWindow_close(buffer->window);
    if (buffer->event.type == sfEvtMouseButtonReleased)
        check_buttons(scene, buffer, current_scene);
    if (current_scene[0] == 1)
        move_event(scene, current_scene[0]);
    if (buffer->event.type == sfEvtMouseButtonPressed && \
current_scene[0] == 1 && game->start == false)
        check_starter_click(game, buffer->event.mouseButton);
    if (buffer->event.type == sfEvtMouseButtonPressed)
        clicked_status(scene, current_scene[0], buffer->event.mouseButton);
    if (sfKeyboard_isKeyPressed(sfKeyEscape) && \
(current_scene[0] == 1 || current_scene[0] == 3))
        switch_to_pause(current_scene, scene);
    if (sfKeyboard_isKeyPressed(sfKeyC) && current_scene[0] == 1)
        switch_to_fight(current_scene, scene);
}