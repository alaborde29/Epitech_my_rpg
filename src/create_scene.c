/*
** EPITECH PROJECT, 2021
** create_scene.c
** File description:
** create scene
*/

#include "rpg.h"

scene_t *create_scene(int nb_scenes)
{
    scene_t *scene = malloc(sizeof(scene_t) * nb_scenes);

    if (scene == NULL)
        return (NULL);
    return (scene);
}