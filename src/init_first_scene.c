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
    scene[0].buttons[0]->text = create_text((sfVector2f){960 - 35, 430}, \
"PLAY", scene[0].buttons[0]->font, sfWhite);
    if (scene[0].buttons[0]->text == NULL)
        return (-1);
    scene[0].buttons[1]->font = sfFont_createFromFile("assets/godzilla.ttf");
    scene[0].buttons[1]->text = create_text((sfVector2f){960 - 35, 700 + 35}, \
"QUIT", scene[0].buttons[1]->font, sfWhite);
    if (scene[0].buttons[1]->text == NULL)
        return (-1);
    scene[0].buttons[2]->font = sfFont_createFromFile("assets/godzilla.ttf");
    scene[0].buttons[2]->text = create_text((sfVector2f){870, 540 + 30}, \
"How To Play", scene[0].buttons[2]->font, sfWhite);
    if (scene[0].buttons[2]->text == NULL)
        return (-1);
    return (0);
}

int init_objs_1(scene_t *scene)
{
    if (init_object(scene[0].objs[0], "assets/menu_bg.jpg", \
(sfVector2f){0, 0}, (sfIntRect){0, 0, 1920, 1080}) == -1)
        return (-1);
    scene[0].objs[0]->clock = NULL;
    if (init_object(scene[0].objs[1], "assets/logo.png", \
(sfVector2f){720, 0}, (sfIntRect){0, 0, 1200, 442}) == -1)
        return (-1);
    sfSprite_setScale(scene[0].objs[1]->sprite, (sfVector2f){0.4, 0.4});
    scene[0].objs[1]->clock = NULL;
    scene[0].objs[2] = NULL;
    return (0);
}

int init_button_1_bis(scene_t *scene)
{
    if (init_button(scene[0].buttons[1], (sfVector2f){960, 750}, \
(sfVector2f){220, 75}, "assets/button.png" ) == -1)
        return (-1);
    sfRectangleShape_setOrigin(scene[0].buttons[1]->rect, \
(sfVector2f){110, 37.5});
    scene[0].buttons[1]->callback = &quit_game;
    scene[0].buttons[1]->over = false;
    scene[0].buttons[1]->clicked = false;
    if (init_button(scene[0].buttons[2], (sfVector2f){960, 590}, \
(sfVector2f){220, 75}, "assets/button.png" ) == -1)
        return (-1);
    sfRectangleShape_setOrigin(scene[0].buttons[2]->rect, \
(sfVector2f){110, 37.5});
    scene[0].buttons[2]->callback = &switch_to_htp;
    scene[0].buttons[2]->over = false;
    scene[0].buttons[2]->clicked = false;
    return (0);
}

int init_button_1(scene_t *scene)
{
    if (init_button(scene[0].buttons[0], (sfVector2f){960, 450}, \
(sfVector2f){220, 75}, "assets/button.png") == -1)
        return (-1);
    sfRectangleShape_setOrigin(scene[0].buttons[0]->rect, \
(sfVector2f){110, 37.5});
    scene[0].buttons[0]->callback = &switch_to_game;
    scene[0].buttons[0]->over = false;
    scene[0].buttons[0]->clicked = false;
<<<<<<< HEAD
    if (init_button(scene[0].buttons[1], (sfVector2f){960, 590}, \
(sfVector2f){220, 75}, "assets/button.png") == -1)
=======
    if (init_button_1_bis(scene) == -1)
>>>>>>> 7ec1eeb311a1da6a7256f34d9cdba0a352c23a10
        return (-1);
    if (init_text_1(scene) == -1)
        return (-1);
    scene[0].buttons[3] = NULL;
    return (0);
}

int init_first_scene(scene_t *scene)
{
    if (malloc_scene(scene, 0, 3, 4) == -1)
        return (-1);
    scene[0].music = sfMusic_createFromFile("assets/menu_music.ogg");
    sfMusic_setLoop(scene[0].music, sfTrue);
    sfMusic_setVolume(scene[0].music, 30);
    if (init_button_1(scene) == -1 || init_objs_1(scene) == -1)
        return (-1);
    return (0);
}