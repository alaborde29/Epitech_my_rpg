/*
** EPITECH PROJECT, 2021
** check_button_state.c
** File description:
** check button state
*/

#include "rpg.h"

void clicked_status(scene_t *scene, int current_scene, \
sfMouseButtonEvent mouse_event)
{
    sfVector2f click_position = {mouse_event.x, mouse_event.y};
    for (int i = 0; scene[current_scene].buttons[i]; i++) {
        if (button_is_clicked(scene[current_scene].buttons[i], \
click_position) == 1) {
            sfRectangleShape_setScale(scene[current_scene].buttons[i]->rect, \
(sfVector2f){0.9, 0.9});
            scene[current_scene].buttons[i]->clicked = true;
        } else
            scene[current_scene].buttons[i]->clicked = false;
    }
}

void reset_button_status(scene_t *scene, \
int current_scene)
{
    for (int i = 0; scene[current_scene].buttons[i]; i++) {
        scene[current_scene].buttons[i]->clicked = false;
        scene[current_scene].buttons[i]->over = false;
    }
}

void resize_button(button_t *button)
{
    button->size.x *= 1.1;
    button->size.y *= 1.1;
    button->over = true;
}

void check_inactive_state(scene_t *scene, int current_scene, sfVector2i pos)
{
    for (int i = 0; scene[current_scene].buttons[i]; i++) {
        if (!((pos.x >= scene[current_scene].buttons[i]->position.x && \
pos.x <= scene[current_scene].buttons[i]->position.x + \
scene[current_scene].buttons[i]->size.x) && \
(pos.y >= scene[current_scene].buttons[i]->position.y && \
pos.y <= scene[current_scene].buttons[i]->position.y + \
scene[current_scene].buttons[i]->size.y))) {
            sfRectangleShape_setScale(scene[current_scene].buttons[i]->rect, \
(sfVector2f){1, 1});
            scene[current_scene].buttons[i]->size.x = \
scene[current_scene].buttons[i]->original_size.x;
            scene[current_scene].buttons[i]->size.y = \
scene[current_scene].buttons[i]->original_size.y;
        }
    }
}

int check_button_state(framebuffer_t *buffer, \
scene_t *scene, int current_scene)
{
    sfVector2i pos = sfMouse_getPositionRenderWindow(buffer->window);

    for (int i = 0; scene[current_scene].buttons[i]; i++) {
        if (scene[current_scene].buttons[i]->clicked == true)
            return (0);
        if ((pos.x >= scene[current_scene].buttons[i]->position.x && \
pos.x <= scene[current_scene].buttons[i]->position.x + \
scene[current_scene].buttons[i]->size.x) && \
(pos.y >= scene[current_scene].buttons[i]->position.y && \
pos.y <= scene[current_scene].buttons[i]->position.y + \
scene[current_scene].buttons[i]->size.y)) {
            sfRectangleShape_setScale(scene[current_scene].buttons[i]->rect, \
(sfVector2f){1.1, 1.1});
            if (scene[current_scene].buttons[i]->over == false)
                resize_button(scene[current_scene].buttons[i]);
        }
    }
    check_inactive_state(scene, current_scene, pos);
    return (0);
}