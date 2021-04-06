/*
** EPITECH PROJECT, 2020
** RPG.h
** File description:
** RPG Header
*/

#ifndef RPG_H_
#define RPG_H_

#include "my.h"
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

typedef struct scene_s scene_t;

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
    void (*callback)(int *, scene_t *, sfRenderWindow *);
}button_t;

typedef struct game_object_s
{
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f position;
    sfIntRect rect;
    int offset;
    int max_value;
}game_object_t;

struct scene_s
{
    struct game_object_s **objs;
    struct button_s **buttons;
    sfMusic *music;
};

typedef struct game
{
}game_t;

typedef struct framebuffer
{
    sfRenderWindow *window;
    sfVideoMode mode;
    sfEvent event;
}framebuffer_t;

//Functions of the project

framebuffer_t *create_framebuffer(sfVideoMode mode);

void start_game(framebuffer_t *buffer, scene_t *scene);

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

void destroy_all(scene_t *scene, framebuffer_t *buffer);

int init_text(button_t *button, char *path, \
sfVector2f position, char *string);

void quit_game(int *current_scene, scene_t *scene, sfRenderWindow *window);

void switch_to_game(int *current_scene, scene_t *scene, sfRenderWindow *window);

int button_is_clicked(button_t *button, sfVector2f click_position);

void check_event(framebuffer_t *buffer, scene_t *scene, int *current_scene);

void check_buttons(scene_t *scene, framebuffer_t *buffer, int *current_scene);

int init_second_scene(scene_t *scene);

#endif /* !RPG_H_ */
