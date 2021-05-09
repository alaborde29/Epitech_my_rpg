/*
** EPITECH PROJECT, 2020
** RPG.h
** File description:
** RPG Header
*/

#ifndef RPG_H_
#define RPG_H_

#include "my.h"
#include "tiles.h"
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <stdlib.h>
#include <SFML/Window/Export.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <SFML/Audio.h>
#include <SFML/Graphics/Text.h>
#include <stdio.h>
#include <SFML/Window/Keyboard.h>
#include <time.h>
#include <stdbool.h>

#define PLAYER 0

typedef struct scene_s scene_t;

typedef enum type {FIRE, WATER, GRASS}TYPE;

typedef struct game game_t;

typedef struct framebuffer
{
    sfRenderWindow *window;
    sfView *view;
    sfView *initial_view;
    sfVideoMode mode;
    sfEvent event;
}framebuffer_t;

typedef struct pokemon_s
{
    char *name;
    char *first_attack;
    int first_damage;
    char *second_attack;
    int second_damage;
    int hp;
    int hp_max;
    int level;
    int xp;
    sfVector2f scale;
    sfSprite *sprite;
    sfTexture *back_texture;
    sfTexture *front_texture;
    TYPE type;
}pokemon_t;

typedef struct attack_s
{
    sfSprite *first_rect;
    sfSprite *second_rect;
    sfTexture *rect_texture;
    sfText *first_attack_name;
    sfText *first_attack_damage;
    sfText *second_attack_name;
    sfText *second_attack_damage;
    bool first;
    bool second;
}attack_t;

typedef struct opponent_s
{
    sfClock *clock;
    sfTime time;
    float seconds;
}opponent_t;

typedef struct fight_s
{
    pokemon_t *opponent_pokemon;
    sfFont *font;
    sfText *name;
    sfText *opponent_name;
    sfTexture *hp_texture;
    sfSprite *hp_sprite;
    sfSprite *opponent_hp_sprite;
    sfText *hp;
    sfText *opponent_hp;
    sfText *level;
    sfText *opponent_level;
    sfText *wait;
    sfText *fight;
    bool player_turn;
    bool attack_choose;
    bool run;
    attack_t *attack;
    int fighting_pokemon;
    opponent_t *opponent;
    sfClock *win_clock;
    sfTime win_time;
    sfText *win_text;
    sfText *loose_text;
    float second;
    bool loose;
    bool win;
}fight_t;

typedef struct starter_s
{
    sfSprite *sprite;
    sfSprite *bg_sprite;
    sfTexture *bg_texture;
    sfTexture *texture;
    pokemon_t **pokemon;
}starter_t;

typedef struct player_s
{
    pokemon_t **pokemon;
    sfVector2f position;
    int nb_pokemon;
}player_t;

typedef struct button_s
{
    sfRectangleShape *rect;
    sfTexture *texture;
    sfText *text;
    sfFont *font;
    sfVector2f position;
    sfVector2f size;
    sfVector2f original_size;
    bool over;
    bool clicked;
    void (*callback)(int *, scene_t *, framebuffer_t *, game_t *);
}button_t;

typedef struct game_object_s
{
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f position;
    sfIntRect rect;
    int offset;
    int max_value;
    sfClock *clock;
    sfTime time;
    float seconds;
    tile_t tile;
}game_object_t;

struct scene_s
{
    struct game_object_s **objs;
    struct game_object_s **ground_map;
    struct game_object_s **above_map;
    char *ground_buffer;
    char *above_buffer;
    struct button_s **buttons;
    game_t *game;
    sfMusic *music;
};

struct game
{
    player_t *player;
    starter_t *starter;
    fight_t *fight;
    pokemon_t **pokemon;
    int nb_pokemon;
    bool start;
    bool fighting;
    int nb_pokeball;
    sfText *pokeball_text;
    sfFont *pokeball_font;
};

//Functions of the project

framebuffer_t *create_framebuffer(sfVideoMode mode);

void start_game(framebuffer_t *buffer, scene_t *scene, game_t *game);

int malloc_scene(scene_t *scene, int current_scene, \
int nb_objs, int nb_buttons);

int init_first_scene(scene_t *scene);

int init_all_scene(scene_t *scene);

scene_t *create_scene(int nb_scenes);

int init_button(button_t *button, sfVector2f position, \
sfVector2f size, char *path);

int init_object(game_object_t *obj, char *path, \
sfVector2f position, sfIntRect rect);

void draw_scene(framebuffer_t *buffer, scene_t *scene, int current_scene);

void destroy_all(scene_t *scene, framebuffer_t *buffer, game_t *game);

int init_text(button_t *button, char *path, \
sfVector2f position, char *string);

void quit_game(int *current_scene, scene_t *scene, \
framebuffer_t *buffer, game_t *game);

void switch_to_game(int *current_scene, scene_t *scene, \
framebuffer_t *buffer, game_t *game);

int button_is_clicked(button_t *button, sfVector2f click_position);

void check_event(framebuffer_t *buffer, scene_t *scene, \
game_t *game, int *current_scene);

void check_buttons(scene_t *scene, framebuffer_t *buffer, \
int *current_scene, game_t *game);

int init_second_scene(scene_t *scene);

void animate_sprite(game_object_t *obj);

void update_sprites(scene_t *scene, int current_scene);

void down_move(game_object_t *obj, framebuffer_t *buffer);

void up_move(game_object_t *obj, framebuffer_t *buffer);

void right_move(game_object_t *obj, framebuffer_t *buffer);

void left_move(game_object_t *obj, framebuffer_t *buffer);

void update_sprite(game_object_t *obj);

int check_button_state(framebuffer_t *buffer, \
scene_t *scene, int current_scene);

void clicked_status(scene_t *scene, int current_scene, \
sfMouseButtonEvent mouse_event);

int init_third_scene(scene_t *scene);

player_t *create_player(void);

void menu(scene_t *scene, framebuffer_t *buffer, int *current_scene);

void pause_scene(scene_t *scene, framebuffer_t *buffer, int *current_scene);

void game_scene(scene_t *scene, framebuffer_t *buffer, \
game_t *game, int *current_scene);

void destroy_player(player_t *player);

void starter_choice(game_t *game, framebuffer_t *buffer);

game_t *create_game(void);

void init_third_starter(pokemon_t *pokemon);

void init_second_starter(pokemon_t *pokemon);

void init_first_starter(pokemon_t *pokemon);

void check_starter_click(game_t *game, sfMouseButtonEvent mouse_event);

void destroy_pokemon(pokemon_t *pokemon);

void destroy_starter(starter_t *starter);

int init_fight_scene(scene_t *scene);

void fight_scene(scene_t *scene, framebuffer_t *buffer, \
game_t *game, int *current_scene);

fight_t *create_fight(void);

char *my_itoc(int nb);

void destroy_fight(fight_t *fight);

char *create_hp_string(int hp, int hp_max);

char *create_level_string(int level);

void switch_to_fight(int *current_scene, scene_t *scene, framebuffer_t *buffer);

void switch_to_pause(int *current_scene, scene_t *scene, \
framebuffer_t *buffer, game_t *game);

int init_fourth_scene(scene_t *scene);

void switch_to_inventory(int *current_scene, scene_t *scene, \
framebuffer_t *buffer);

void inventory(scene_t *scene, framebuffer_t *buffer, game_t *game, \
int *current_scene);

void set_text_pos(fight_t *fight);

void set_fighting_pokemon_text(pokemon_t *pokemon, fight_t *fight);

void set_fighting_pokemon(pokemon_t *pokemon, pokemon_t *opponent_pokemon);

void run_action(int *current_scene, scene_t *scene, \
framebuffer_t *buffer, game_t *game);

void dup_pokemon(pokemon_t *initial_pokemon, pokemon_t *dest_pokemon);

sfText *create_text(sfVector2f pos, char *string, sfFont *font, sfColor color);

void attack_action(int *current_scene, scene_t *scene, \
framebuffer_t *buffer, game_t *game);

void display_text(framebuffer_t *buffer, sfText *text);

void make_our_turn(framebuffer_t *buffer, game_t *game, \
scene_t *scene, int current_scene);

void set_text(pokemon_t *pokemon, attack_t *attack);

int init_htp_scene(scene_t *scene);

void htp_scene(framebuffer_t *buffer, scene_t *scene, int *current_scene);

void switch_to_htp(int *current_scene, scene_t *scene, \
framebuffer_t *buffer, game_t *game);

void make_opponent_turn(game_t *game);

attack_t *create_attack(sfFont *font);

void switch_to_menu(int *current_scene, scene_t *scene, \
framebuffer_t *buffer, game_t *game);

void display_end_fight(framebuffer_t *buffer, game_t *game);

void display_button(framebuffer_t *buffer, button_t **buttons);

void display_text(framebuffer_t *buffer, sfText *text);

void make_turn(game_t *game, framebuffer_t *buffer, \
scene_t *scene, int current_scene);

void init_loose(game_t *game, framebuffer_t *buffer, \
int *current_scene, scene_t *scene);

void init_won(game_t *game, framebuffer_t *buffer, \
int *current_scene, scene_t *scene);

pokemon_t **create_all_pokemon(int nb_pokemons, starter_t *starter);

int pick_random_pokemon(int nb_pokemons);

void destroy_fight(fight_t *fight);

void catch_pokemon(int *current_scene, scene_t *scene, \
framebuffer_t *buffer, game_t *game);

/*init tiles*/

game_object_t **init_tile(char *map_path);

tile_t *init_tile_tab(void);

int draw_map(framebuffer_t *framebuffer, scene_t scene);

int draw_map_above(framebuffer_t *framebuffer, scene_t scene);

/*utilities functions*/

int count_str_lines(char *str);

char *read_file(char *path, char *buffer);

int linelen_from_n_line(char *str, int line);

int count_alpha_letter(char *str);

sfIntRect init_rect(int width, int height, int x, int y);

game_object_t **init_tile_list(void);

game_object_t **init_tile_list_above(void);

#endif /* !RPG_H_ */