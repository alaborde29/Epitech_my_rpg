/*
** EPITECH PROJECT, 2021
** B-MUL-200-NAN-2-1-myrpg-henri.chauvet
** File description:
** tiles
*/

#include <SFML/Graphics.h>

#ifndef TILES_H_
#define TILES_H_

#define A_TILE_POS_X 96
#define A_TILE_POS_Y 2240
#define A_TILE_SIZE_X 32
#define A_TILE_SIZE_Y 32

#define B_TILE_POS_X
#define B_TILE_POS_Y
#define B_TILE_SIZE_X
#define B_TILE_SIZE_Y

#define C_TILE_POS_X
#define C_TILE_POS_Y
#define C_TILE_SIZE_X
#define C_TILE_SIZE_Y

#define D_TILE_POS_X
#define D_TILE_POS_Y
#define D_TILE_SIZE_X
#define D_TILE_SIZE_Y

#define E_TILE_POS_X
#define E_TILE_POS_Y
#define E_TILE_SIZE_X
#define E_TILE_SIZE_Y

#define F_TILE_POS_X
#define F_TILE_POS_Y
#define F_TILE_SIZE_X
#define F_TILE_SIZE_Y

#define G_TILE_POS_X
#define G_TILE_POS_Y
#define G_TILE_SIZE_X
#define G_TILE_SIZE_Y

#define H_TILE_POS_X
#define H_TILE_POS_Y
#define H_TILE_SIZE_X
#define H_TILE_SIZE_Y

#define I_TILE_POS_X
#define I_TILE_POS_Y
#define I_TILE_SIZE_X
#define I_TILE_SIZE_Y

#define J_TILE_POS_X
#define J_TILE_POS_Y
#define J_TILE_SIZE_X
#define J_TILE_SIZE_Y

#define K_TILE_POS_X
#define K_TILE_POS_Y
#define K_TILE_SIZE_X
#define K_TILE_SIZE_Y

#define L_TILE_POS_X
#define L_TILE_POS_Y
#define L_TILE_SIZE_X
#define L_TILE_SIZE_Y

#define M_TILE_POS_X
#define M_TILE_POS_Y
#define M_TILE_SIZE_X
#define M_TILE_SIZE_Y

#define N_TILE_POS_X
#define N_TILE_POS_Y
#define N_TILE_SIZE_X
#define N_TILE_SIZE_Y

#define O_TILE_POS_X
#define O_TILE_POS_Y
#define O_TILE_SIZE_X
#define O_TILE_SIZE_Y

#define P_TILE_POS_X
#define P_TILE_POS_Y
#define P_TILE_SIZE_X
#define P_TILE_SIZE_Y

#define Q_TILE_POS_X
#define Q_TILE_POS_Y
#define Q_TILE_SIZE_X
#define Q_TILE_SIZE_Y

#define R_TILE_POS_X
#define R_TILE_POS_Y
#define R_TILE_SIZE_X
#define R_TILE_SIZE_Y

#define S_TILE_POS_X
#define S_TILE_POS_Y
#define S_TILE_SIZE_X
#define S_TILE_SIZE_Y

#define T_TILE_POS_X
#define T_TILE_POS_Y
#define T_TILE_SIZE_X
#define T_TILE_SIZE_Y

#define U_TILE_POS_X
#define U_TILE_POS_Y
#define U_TILE_SIZE_X
#define U_TILE_SIZE_Y

#define V_TILE_POS_X
#define V_TILE_POS_Y
#define V_TILE_SIZE_X
#define V_TILE_SIZE_Y

#define W_TILE_POS_X
#define W_TILE_POS_Y
#define W_TILE_SIZE_X
#define W_TILE_SIZE_Y

#define X_TILE_POS_X
#define X_TILE_POS_Y
#define X_TILE_SIZE_X
#define X_TILE_SIZE_Y

#define Y_TILE_POS_X
#define Y_TILE_POS_Y
#define Y_TILE_SIZE_X
#define Y_TILE_SIZE_Y

#define Z_TILE_POS_X
#define Z_TILE_POS_Y
#define Z_TILE_SIZE_X
#define Z_TILE_SIZE_Y

/*MAP PATH*/

#define TEST_1 "assets/map_files/Test_big_flatzone"
#define TEST_2 "assets/map_files/Test_small_flatzone"

/* STRUCTS */

typedef struct tile_s {
    char id;
    sfVector2f tile_pos;
    sfVector2f tile_size;
}tile_t;

#endif /* !TILES_H_ */
