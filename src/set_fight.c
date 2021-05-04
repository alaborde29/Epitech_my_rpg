/*
** EPITECH PROJECT, 2021
** set_fight.c
** File description:
** set fight
*/

#include "rpg.h"

void set_text_pos(fight_t *fight)
{
    sfText_setPosition(fight->name, (sfVector2f){1120, 520});
    sfText_setPosition(fight->opponent_name, (sfVector2f){140, 140});
    sfText_setPosition(fight->hp, (sfVector2f){1130, 640});
    sfText_setPosition(fight->opponent_hp, (sfVector2f){140, 220});
    sfText_setPosition(fight->level, (sfVector2f){1650, 520});
    sfText_setPosition(fight->opponent_level, (sfVector2f){650, 140});
}

void set_fighting_pokemon_text(pokemon_t *pokemon, fight_t *fight)
{
    char *hp_str = NULL;
    char *level_str = NULL;

    level_str = create_level_string(pokemon->level);
    sfText_setString(fight->level, level_str);
    free(level_str);
    level_str = create_level_string(fight->opponent_pokemon->level);
    hp_str = create_hp_string(pokemon->hp, pokemon->hp_max);
    sfText_setString(fight->hp, hp_str);
    free(hp_str);
    hp_str = create_hp_string(fight->opponent_pokemon->hp, \
fight->opponent_pokemon->hp_max);
    sfText_setString(fight->name, pokemon->name);
    sfText_setString(fight->opponent_name, fight->opponent_pokemon->name);
    sfText_setString(fight->opponent_hp, hp_str);
    sfText_setString(fight->opponent_level, level_str);
    set_text_pos(fight);
    free(level_str);
    free(hp_str);
}

void set_fighting_pokemon(pokemon_t *pokemon, pokemon_t *opponent_pokemon)
{
    sfSprite_setTexture(pokemon->sprite, pokemon->back_texture, sfTrue);
    sfSprite_setTexture(opponent_pokemon->sprite, \
opponent_pokemon->front_texture, sfTrue);
    sfSprite_setScale(pokemon->sprite, (sfVector2f){6.5, 6.5});
    sfSprite_setScale(opponent_pokemon->sprite, (sfVector2f){6.5, 6.5});
    sfSprite_setPosition(pokemon->sprite, (sfVector2f){350, 550});
    sfSprite_setPosition(opponent_pokemon->sprite, (sfVector2f){1280, 180});
}