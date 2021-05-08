/*
** EPITECH PROJECT, 2021
** init_fourth_scene.c
** File description:
** init_fourth_scene
*/

#include "rpg.h"

int init_text_4(scene_t *scene)
{
    scene[4].buttons[0]->font = sfFont_createFromFile("assets/godzilla.ttf");
    if (scene[4].buttons[0]->font == NULL)
        return (-1);
    scene[4].buttons[0]->text = create_text((sfVector2f){735, 900}, \
"RESUME", scene[4].buttons[0]->font, sfWhite);
    if (scene[4].buttons[0]->text == NULL)
        return (-1);
    scene[4].buttons[1]->font = sfFont_createFromFile("assets/godzilla.ttf");
    if (scene[4].buttons[1]->font == NULL)
        return (-1);
    scene[4].buttons[1]->text = create_text((sfVector2f){1150, 900}, \
"QUIT", scene[4].buttons[1]->font, sfWhite);
    if (scene[4].buttons[1]->text == NULL)
        return (-1);
    return (0);
}

int init_objs_4(scene_t *scene)
{
    if (init_object(scene[4].objs[0], "assets/htp_bg.png", \
(sfVector2f){0, 0}, (sfIntRect){0, 0, 1920, 1080}) == -1)
        return (-1);
    scene[4].objs[0]->clock = NULL;
    if (init_object(scene[4].objs[1], "assets/inventory.jpg", \
(sfVector2f){680, 150}, (sfIntRect){0, 0, 600, 734}) == -1)
        return (-1);
    scene[4].objs[1]->clock = NULL;
    scene[4].objs[2] = NULL;
    return (0);
}

int init_button_4(scene_t *scene)
{
    if (init_button(scene[4].buttons[0], (sfVector2f){785, 920}, \
(sfVector2f){220, 75}, "assets/button.png" ) == -1)
        return (-1);
    sfRectangleShape_setOrigin(scene[4].buttons[0]->rect, \
(sfVector2f){110, 37.5});
    scene[4].buttons[0]->callback = &switch_to_game;
    scene[4].buttons[0]->over = false;
    scene[4].buttons[0]->clicked = false;
    if (init_button(scene[4].buttons[1], (sfVector2f){1180, 920}, \
(sfVector2f){220, 75}, "assets/button.png") == -1)
        return (-1);
    sfRectangleShape_setOrigin(scene[4].buttons[1]->rect, \
(sfVector2f){110, 37.5});
    scene[4].buttons[1]->callback = &quit_game;
    scene[4].buttons[1]->over = false;
    scene[4].buttons[1]->clicked = false;
    if (init_text_4(scene) == -1)
        return (-1);
    scene[4].buttons[2] = NULL;
    return (0);
}

int init_fourth_scene(scene_t *scene)
{
    if (malloc_scene(scene, 4, 3, 3) == -1)
        return (-1);
    scene[4].music = NULL;
    if (init_button_4(scene) == -1 || init_objs_4(scene) == -1)
        return (-1);
    return (0);
}