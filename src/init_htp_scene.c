/*
** EPITECH PROJECT, 2021
** init_htp_scene.c
** File description:
** init htp scene
*/

#include "rpg.h"

int init_htp_text(button_t **buttons)
{
    buttons[0]->font = sfFont_createFromFile("assets/godzilla.ttf");
    if (buttons[0]->font == NULL)
        return (-1);
    buttons[0]->text = create_text((sfVector2f){765, 880}, \
"MENU", buttons[0]->font, sfWhite);
    if (buttons[0]->text == NULL)
        return (-1);
    buttons[1]->font = sfFont_createFromFile("assets/godzilla.ttf");
    if (buttons[1]->font == NULL)
        return (-1);
    buttons[1]->text = create_text((sfVector2f){1170, 880}, \
"QUIT", buttons[1]->font, sfWhite);
    if (buttons[1]->text == NULL)
        return (-1);
    return (0);
}

int init_htp_objs(scene_t *scene)
{
    if (init_object(scene[5].objs[0], "assets/htp.png", \
(sfVector2f){0, 0}, (sfIntRect){0, 0, 1920, 1080}) == -1)
        return (-1);
    scene[5].objs[0]->clock = NULL;
    scene[5].objs[1] = NULL;
    return (0);
}

int init_htp_button(scene_t *scene)
{
    if (init_button(scene[5].buttons[0], (sfVector2f){800, 900}, \
(sfVector2f){220, 75}, "assets/button.png" ) == -1)
        return (-1);
    sfRectangleShape_setOrigin(scene[5].buttons[0]->rect, \
(sfVector2f){110, 37.5});
    scene[5].buttons[0]->callback = &switch_to_menu;
    scene[5].buttons[0]->over = false;
    scene[5].buttons[0]->clicked = false;
    if (init_button(scene[5].buttons[1], (sfVector2f){1200, 900}, \
(sfVector2f){220, 75}, "assets/button.png") == -1)
        return (-1);
    sfRectangleShape_setOrigin(scene[5].buttons[1]->rect, \
(sfVector2f){110, 37.5});
    scene[5].buttons[1]->callback = &quit_game;
    scene[5].buttons[1]->over = false;
    scene[5].buttons[1]->clicked = false;
    if (init_htp_text(scene[5].buttons) == -1)
        return (-1);
    scene[5].buttons[2] = NULL;
    return (0);
}

int init_htp_scene(scene_t *scene)
{
    if (malloc_scene(scene, 5, 2, 3) == -1)
        return (-1);
    scene[5].music = NULL;
    if (init_htp_button(scene) == -1 || init_htp_objs(scene) == -1)
        return (-1);
    return (0);
}