/*
** EPITECH PROJECT, 2021
** init_third_scene.c
** File description:
** init_third_scene.c
*/

#include "rpg.h"

int init_text_3(scene_t *scene)
{
    scene[2].buttons[0]->font = sfFont_createFromFile("assets/godzilla.ttf");
    if (scene[2].buttons[0]->font == NULL)
        return (-1);
    scene[2].buttons[0]->text = create_text((sfVector2f){960 - 50, 430}, \
"RESUME", scene[2].buttons[0]->font, sfWhite);
    if (scene[2].buttons[0]->text == NULL)
        return (-1);
    scene[2].buttons[1]->font = sfFont_createFromFile("assets/godzilla.ttf");
    scene[2].buttons[1]->text = create_text((sfVector2f){960 - 35, 540 + 30}, \
"QUIT", scene[2].buttons[1]->font, sfWhite);
    if (scene[2].buttons[1]->text == NULL)
        return (-1);
    return (0);
}

int init_objs_3(scene_t *scene)
{
    if (init_object(scene[2].objs[0], "assets/bg_pause3.jpg", \
(sfVector2f){0, 0}, (sfIntRect){0, 0, 1920, 1200}) == -1)
        return (-1);
    scene[2].objs[0]->clock = NULL;
    if (init_object(scene[2].objs[1], "assets/logo.png", \
(sfVector2f){720, 0}, (sfIntRect){0, 0, 1200, 442}) == -1)
        return (-1);
    sfSprite_setScale(scene[2].objs[1]->sprite, (sfVector2f){0.4, 0.4});
    scene[2].objs[1]->clock = NULL;
    scene[2].objs[2] = NULL;
    return (0);
}

int init_button_3(scene_t *scene)
{
    if (init_button(scene[2].buttons[0], (sfVector2f){960, 450}, \
(sfVector2f){220, 75}, "assets/button.png") == -1)
        return (-1);
    sfRectangleShape_setOrigin(scene[2].buttons[0]->rect, \
(sfVector2f){110, 37.5});
    scene[2].buttons[0]->callback = &switch_to_game;
    scene[2].buttons[0]->over = false;
    scene[2].buttons[0]->clicked = false;
    if (init_button(scene[2].buttons[1], (sfVector2f){960, 590}, \
(sfVector2f){220, 75}, "assets/button.png" ) == -1)
        return (-1);
    sfRectangleShape_setOrigin(scene[2].buttons[1]->rect, \
(sfVector2f){110, 37.5});
    scene[2].buttons[1]->callback = &quit_game;
    scene[2].buttons[1]->over = false;
    scene[2].buttons[1]->clicked = false;
    if (init_text_3(scene) == -1)
        return (-1);
    scene[2].buttons[2] = NULL;
    return (0);
}

int init_third_scene(scene_t *scene)
{
    if (malloc_scene(scene, 2, 3, 3) == -1)
        return (-1);
    scene[2].music = NULL;
    if (init_button_3(scene) == -1 || init_objs_3(scene) == -1)
        return (-1);
    return (0);
}