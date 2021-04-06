/*
** EPITECH PROJECT, 2021
** init_first_scene.c
** File description:
** init first scene
*/

#include "rpg.h"

int init_text_1(scene_t *scene)
{
    scene[0].buttons[0]->font = sfFont_createFromFile("assets/godzilla.ttf");
    if (scene[0].buttons[0]->font == NULL)
        return (-1);
    scene[0].buttons[0]->text = sfText_create();
    if (scene[0].buttons[0]->text == NULL)
        return (-1);
    sfText_setFont(scene[0].buttons[0]->text, scene[0].buttons[0]->font);
    sfText_setString(scene[0].buttons[0]->text, "PLAY");
    sfText_setPosition(scene[0].buttons[0]->text, \
(sfVector2f){960 - 35, 430});
    scene[0].buttons[1]->font = sfFont_createFromFile("assets/godzilla.ttf");
    scene[0].buttons[1]->text = sfText_create();
    if (scene[0].buttons[1]->font == NULL || scene[0].buttons[1]->text == NULL)
        return (-1);
    sfText_setFont(scene[0].buttons[1]->text, scene[0].buttons[1]->font);
    sfText_setString(scene[0].buttons[1]->text, "QUIT");
    sfText_setPosition(scene[0].buttons[1]->text, \
(sfVector2f){960 - 35, 540 + 30});
    return (0);
}

int init_objs_1(scene_t *scene)
{
    init_object(scene[0].objs[0], "assets/menu_bg.jpg", \
(sfVector2f){0, 0}, (sfIntRect){0, 0, 1920, 1080});
    init_object(scene[0].objs[1], "assets/logo.png", \
(sfVector2f){720, 0}, (sfIntRect){0, 0, 1200, 442});
    sfSprite_setScale(scene[0].objs[1]->sprite, (sfVector2f){0.4, 0.4});
    scene[0].objs[2] = NULL;
    return (0);
}

int init_button_1(scene_t *scene)
{
    init_button(scene[0].buttons[0], (sfVector2f){960, 450}, \
(sfVector2f){220, 75}, "assets/button.png");
    sfRectangleShape_setOrigin(scene[0].buttons[0]->rect, \
(sfVector2f){110, 37.5});
    scene[0].buttons[0]->callback = &switch_to_game;
    init_button(scene[0].buttons[1], (sfVector2f){960, 590}, \
(sfVector2f){220, 75}, "assets/button.png");
    sfRectangleShape_setOrigin(scene[0].buttons[1]->rect, \
(sfVector2f){110, 37.5});
    scene[0].buttons[1]->callback = &quit_game;
    init_text_1(scene);
    scene[0].buttons[2] = NULL;
    return (0);
}

int init_first_scene(scene_t *scene)
{
    if (malloc_scene(scene, 0, 3, 3) == -1)
        return (-1);
    scene[0].music = NULL;
    if (init_button_1(scene) == -1 || init_objs_1(scene) == -1)
        return (-1);
    return (0);
}