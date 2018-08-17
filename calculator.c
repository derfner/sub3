/**
 * @file calculator.c
 * @author  Alon Emanuel <alon.derfner@mail.huji.ac.il>
 * @version 1.0
 * @date 16 Aug 2018
 *
 * @brief System that handles logic behind a battleships game.
 *
 * @section LICENSE
 * This program is not a free software.
 *
 * @section DESCRIPTION
 * This system handles the logic behind a battleships game held between a user and the computer.
 * This is the backend of the game.
 */

// ------------------------------ includes ------------------------------
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include "calculator.h"

// -------------------------- const definitions -------------------------
/**
 * @brief Macros that define the way each token is displayed on the board.
 */
#define EMPTY_SPOT '_'
#define HIT_SPOT 'x'
#define MISS_SPOT 'o'

/**
 * @brief Define the two angles for ships to be randomized.
 */
#define VERTICAL 0
#define HORIZONTAL 1


// ------------------------------ functions -----------------------------

typedef double (*diff_func)(double right, double top, double left, double bottom);

double calculate(diff_func function, double **grid, size_t n, size_t m, point *sources,
				 size_t num_sources, double terminate, int n_iter, int is_cyclic);

double calcInitialHeatSum();


