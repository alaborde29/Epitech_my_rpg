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

void move_event(scene_t *scene, int current_scene, framebuffer_t *buffer)
{
    int indic = 0;

    if (sfKeyboard_isKeyPressed(sfKeyLeft)) {
        left_move(scene[current_scene].objs[PLAYER], buffer);
        indic = 1;
    }
    if (sfKeyboard_isKeyPressed(sfKeyRight)) {
        right_move(scene[current_scene].objs[PLAYER], buffer);
        indic = 1;
    }
    if (sfKeyboard_isKeyPressed(sfKeyUp)) {
        up_move(scene[current_scene].objs[PLAYER], buffer);
        indic = 1;
    }
    if (sfKeyboard_isKeyPressed(sfKeyDown)) {
        down_move(scene[current_scene].objs[PLAYER], buffer);
        indic = 1;
    }
    reset_player(scene[current_scene].objs[PLAYER], indic);
}

int check_click_attack(game_t *game, framebuffer_t *buffer)
{
    if ((buffer->event.mouseButton.x >= 1400 && \
buffer->event.mouseButton.x <= 1803) && \
(buffer->event.mouseButton.y >= 770 && buffer->event.mouseButton.y <= 947)) {
        game->fight->attack->second = true;
        return (1);
    }
    if ((buffer->event.mouseButton.x >= 950 && \
buffer->event.mouseButton.x <= 1353) && \
(buffer->event.mouseButton.y >= 770 && buffer->event.mouseButton.y <= 947)) {
        game->fight->attack->first = true;
        return (1);
    }
    return (0);
}

void switch_interface(framebuffer_t *buffer, scene_t *scene, \
game_t *game, int *current_scene)
{
    int nb = 0;

    if (sfKeyboard_isKeyPressed(sfKeyEscape) && current_scene[0] == 1)
        switch_to_pause(current_scene, scene, buffer, game);
    if (sfKeyboard_isKeyPressed(sfKeyC) && current_scene[0] == 1) {
        nb = pick_random_pokemon(game->nb_pokemon);
        dup_pokemon(game->pokemon[nb], game->fight->opponent_pokemon);
        switch_to_fight(current_scene, scene, buffer);
    }
    if (sfKeyboard_isKeyPressed(sfKeyI) && current_scene[0] == 1)
        switch_to_inventory(current_scene, scene, buffer);
}

void check_event(framebuffer_t *buffer, scene_t *scene, \
game_t *game, int *current_scene)
{
    int indic = 0;

    if (buffer->event.type == sfEvtClosed)
        sfRenderWindow_close(buffer->window);
    if (buffer->event.type == sfEvtMouseButtonReleased && \
game->fight->attack_choose == true)
        indic = check_click_attack(game, buffer);
    if (buffer->event.type == sfEvtMouseButtonReleased && \
game->fight->attack_choose == false && indic == 0)
        check_buttons(scene, buffer, current_scene, game);
    if (current_scene[0] == 1)
        move_event(scene, current_scene[0], buffer);
    if (buffer->event.type == sfEvtMouseButtonPressed && \
current_scene[0] == 1 && game->start == false)
        check_starter_click(game, buffer->event.mouseButton);
    if (buffer->event.type == sfEvtMouseButtonPressed)
        clicked_status(scene, current_scene[0], buffer->event.mouseButton);
    switch_interface(buffer, scene, game, current_scene);
    indic = 0;
}