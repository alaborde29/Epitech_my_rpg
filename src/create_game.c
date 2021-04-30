/*
** EPITECH PROJECT, 2021
** create_game.c
** File description:
** create game
*/

#include "rpg.h"

pokemon_t **create_pokemon(void)
{
    pokemon_t **pokemon = malloc(sizeof(pokemon_t *) * 3);

    for (int i = 0; i < 3; i++)
        pokemon[i] = malloc(sizeof(pokemon_t));
    return (pokemon);
}

void init_pokemon(pokemon_t **pokemon)
{
    init_first_starter(pokemon[2]);
    init_second_starter(pokemon[0]);
    init_third_starter(pokemon[1]);
}

starter_t *create_starter(char *path)
{
    starter_t *starter = malloc(sizeof(starter_t));

    starter->sprite = sfSprite_create();
    starter->texture = sfTexture_createFromFile(path, NULL);
    sfSprite_setTexture(starter->sprite, starter->texture, sfTrue);
    sfSprite_setScale(starter->sprite, (sfVector2f){3.75, 2.65});
    sfSprite_setPosition(starter->sprite, (sfVector2f){0, 800});
    starter->bg_sprite = sfSprite_create();
    starter->bg_texture = \
sfTexture_createFromFile("assets/starter_bg.png", NULL);
    sfSprite_setTexture(starter->bg_sprite, starter->bg_texture, sfTrue);
    starter->pokemon = create_pokemon();
    init_pokemon(starter->pokemon);
    return (starter);
}

game_t *create_game(void)
{
    game_t *game = malloc(sizeof(game_t));

    game->starter = create_starter("assets/choose.png");
    game->player = create_player();
    game->fight = create_fight();
    game->start = false;
    return (game);
}

void destroy_starter(starter_t *starter)
{
    sfSprite_destroy(starter->sprite);
    sfTexture_destroy(starter->texture);
    sfSprite_destroy(starter->bg_sprite);
    sfTexture_destroy(starter->bg_texture);
    for (int i = 0; i < 3; i++) {
        destroy_pokemon(starter->pokemon[i]);
        free(starter->pokemon[i]);
    }
    free(starter->pokemon);
    free(starter);
}