/*
** EPITECH PROJECT, 2021
** init_starter.c
** File description:
** init starter
*/

#include "rpg.h"
#include <string.h>

void init_first_starter(pokemon_t *pokemon)
{
    pokemon->name = my_strdup("Charmander");
    pokemon->level = 1;
    pokemon->hp = 39;
    pokemon->sprite = sfSprite_create();
    pokemon->front_texture = \
sfTexture_createFromFile("assets/pokemon/charmander/front.png", NULL);
    pokemon->back_texture = \
sfTexture_createFromFile("assets/pokemon/charmander/back.png", NULL);
    sfSprite_setTexture(pokemon->sprite, pokemon->front_texture, sfTrue);
    sfSprite_setScale(pokemon->sprite, (sfVector2f){3, 3});
    sfSprite_setPosition(pokemon->sprite, (sfVector2f){1550, 450});
    pokemon->type = FIRE;
    pokemon->first_attack = my_strdup("Growl");
    pokemon->first_damage = 10;
    pokemon->second_attack = my_strdup("Ember");
    pokemon->second_damage = 15;
}

void init_second_starter(pokemon_t *pokemon)
{
    pokemon->name = my_strdup("Bulbasaur");
    pokemon->level = 1;
    pokemon->hp = 45;
    pokemon->sprite = sfSprite_create();
    pokemon->front_texture = \
sfTexture_createFromFile("assets/pokemon/bulbasaur/front.png", NULL);
    pokemon->back_texture = \
sfTexture_createFromFile("assets/pokemon/bulbasaur/back.png", NULL);
    sfSprite_setTexture(pokemon->sprite, pokemon->front_texture, sfTrue);
    sfSprite_setScale(pokemon->sprite, (sfVector2f){3, 3});
    sfSprite_setPosition(pokemon->sprite, (sfVector2f){280, 470});
    pokemon->type = GRASS;
    pokemon->first_attack = my_strdup("Growl");
    pokemon->first_damage = 10;
    pokemon->second_attack = my_strdup("Vine Whip");
    pokemon->second_damage = 15;
}

void init_third_starter(pokemon_t *pokemon)
{
    pokemon->name = my_strdup("Squirtle");
    pokemon->level = 1;
    pokemon->hp = 44;
    pokemon->sprite = sfSprite_create();
    pokemon->front_texture = \
sfTexture_createFromFile("assets/pokemon/squirtle/front.png", NULL);
    pokemon->back_texture = \
sfTexture_createFromFile("assets/pokemon/squirtle/back.png", NULL);
    sfSprite_setTexture(pokemon->sprite, pokemon->front_texture, sfTrue);
    sfSprite_setPosition(pokemon->sprite, (sfVector2f){930, 450});
    sfSprite_setScale(pokemon->sprite, (sfVector2f){3, 3});
    pokemon->type = WATER;
    pokemon->first_attack = my_strdup("Tackle");
    pokemon->first_damage = 10;
    pokemon->second_attack = my_strdup("Water Gun");
    pokemon->second_damage = 15;
}