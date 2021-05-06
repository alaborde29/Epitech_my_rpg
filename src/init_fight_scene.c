/*
** EPITECH PROJECT, 2021
** init_fight_scene.c
** File description:
** init fight scene
*/

#include "rpg.h"

int init_fight_objs(scene_t *scene)
{
    if (init_object(scene[3].objs[0], "assets/fight_bg.png", \
(sfVector2f){0, 0}, (sfIntRect){0, 0, 556, 258}) == -1)
        return (-1);
    scene[3].objs[0]->clock = NULL;
    sfSprite_setScale(scene[3].objs[0]->sprite, (sfVector2f){3.46, 2.8});
    if (init_object(scene[3].objs[1], "assets/text_sprite.png", \
(sfVector2f){0, 722}, (sfIntRect){0, 0, 556, 113}) == -1)
        return (-1);
    scene[3].objs[1]->clock = NULL;
    sfSprite_setScale(scene[3].objs[1]->sprite, (sfVector2f){3.46, 2.8});
    scene[3].objs[2] = NULL;
    return (0);
}

void init_button_value(button_t *button, void *pf)
{
    button->over = false;
    button->clicked = false;
    button->text = NULL;
    button->font = NULL;
    button->callback = pf;
}

int init_fight_button2(scene_t *scene)
{
    if (init_button(scene[3].buttons[2], (sfVector2f){1500, 875}, \
(sfVector2f){220, 75}, "assets/action_fight.png") == -1)
        return (-1);
    sfRectangleShape_setOrigin(scene[3].buttons[2]->rect, \
(sfVector2f){110, 37.5});
    init_button_value(scene[3].buttons[2], &run_action);
    if (init_button(scene[3].buttons[3], (sfVector2f){1720, 875}, \
(sfVector2f){220, 75}, "assets/bag_button.png") == -1)
        return (-1);
    sfRectangleShape_setOrigin(scene[3].buttons[3]->rect, \
(sfVector2f){110, 37.5});
    init_button_value(scene[3].buttons[3], &switch_to_game);
    return (0);
}

int init_fight_button(scene_t *scene)
{
    if (init_button(scene[3].buttons[0], (sfVector2f){1500, 800}, \
(sfVector2f){220, 75}, "assets/attack_button.png") == -1)
        return (-1);
    sfRectangleShape_setOrigin(scene[3].buttons[0]->rect, \
(sfVector2f){110, 37.5});
    init_button_value(scene[3].buttons[0], &attack_action);
    if (init_button(scene[3].buttons[1], (sfVector2f){1720, 800}, \
(sfVector2f){220, 75}, "assets/pokemon.png") == -1)
        return (-1);
    sfRectangleShape_setOrigin(scene[3].buttons[1]->rect, \
(sfVector2f){110, 37.5});
    init_button_value(scene[3].buttons[1], &switch_to_game);
    init_fight_button2(scene);
    scene[3].buttons[4] = NULL;
    return (0);
}

int init_fight_scene(scene_t *scene)
{
    if (malloc_scene(scene, 3, 3, 5) == -1)
        return (-1);
    scene[3].music = sfMusic_createFromFile("assets/battle_music.ogg");
    sfMusic_setLoop(scene[3].music, sfTrue);
    sfMusic_setVolume(scene[3].music, 25);
    if (init_fight_button(scene) == -1 || init_fight_objs(scene) == -1)
        return (-1);
    return (0);
}