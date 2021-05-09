/*
** EPITECH PROJECT, 2021
** game_scene.c
** File description:
** game scene
*/

#include "rpg.h"

void set_pokeball_text(game_t *game)
{
    game->nb_pokeball = 10;
    char *pokeball = malloc(sizeof(char) * 50);

    pokeball[0] = '\0';
    my_strcat(pokeball, "x");
    my_strcat(pokeball, my_itoc(game->nb_pokeball));
    sfText_setString(game->pokeball_text, pokeball);
    sfText_setPosition(game->pokeball_text, (sfVector2f){875, 315});
    free(pokeball);
}

void inventory(scene_t *scene, framebuffer_t *buffer, game_t *game, \
int *current_scene)
{
    sfRenderWindow_clear(buffer->window, sfBlack);
    check_button_state(buffer, scene, current_scene[0]);
    set_pokeball_text(game);
    draw_scene(buffer, scene, current_scene[0]);
    display_text(buffer, game->pokeball_text);
    sfRenderWindow_display(buffer->window);
}