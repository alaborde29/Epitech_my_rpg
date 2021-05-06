/*
** EPITECH PROJECT, 2021
** check_buttons.c
** File description:
** check buttons
*/

#include "rpg.h"

int check_button(button_t *button, sfVector2f click_position)
{
    if (button_is_clicked(button, click_position)) {
        return (1);
    }
    return (0);
}

void check_buttons(scene_t *scene, framebuffer_t *buffer, \
int *current_scene, game_t *game)
{
    int initial_scene = current_scene[0];
    sfVector2f click_position = {buffer->event.mouseButton.x, \
buffer->event.mouseButton.y};

    for (int i = 0; scene[current_scene[0]].buttons[i]; i++) {
        if (check_button(scene[current_scene[0]].buttons[i], \
click_position) == 1) {
            scene[current_scene[0]].buttons[i]->callback(current_scene, \
scene, buffer, game);
        }
        if (initial_scene != current_scene[0]) {
            scene[initial_scene].buttons[i]->clicked = false;
            break;
        }
        scene[current_scene[0]].buttons[i]->clicked = false;
    }
}