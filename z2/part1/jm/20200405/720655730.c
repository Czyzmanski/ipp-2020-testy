#include <stdint.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include "gamma.h"
#include <stdbool.h>


int main() {

/*
scenario: fill_board_without_collisions
uuid: 720655730
*/
/*
gamma_move, fill board no collisions, many players, unlimited areas
*/
gamma_t* board = gamma_new(10, 10, 30, 100);
assert( board != NULL );


assert( gamma_move(board, 10, 6, 8) == 1 );
assert( gamma_move(board, 25, 4, 3) == 1 );
assert( gamma_move(board, 4, 8, 5) == 1 );
assert( gamma_move(board, 16, 2, 3) == 1 );
assert( gamma_move(board, 13, 1, 1) == 1 );
assert( gamma_move(board, 25, 6, 3) == 1 );
assert( gamma_move(board, 28, 3, 8) == 1 );
assert( gamma_move(board, 23, 0, 5) == 1 );
assert( gamma_move(board, 26, 0, 2) == 1 );
assert( gamma_move(board, 14, 0, 0) == 1 );
assert( gamma_move(board, 13, 7, 1) == 1 );
assert( gamma_move(board, 23, 5, 8) == 1 );
assert( gamma_move(board, 1, 1, 6) == 1 );
assert( gamma_move(board, 11, 0, 9) == 1 );
assert( gamma_move(board, 4, 6, 7) == 1 );
assert( gamma_move(board, 21, 5, 4) == 1 );
assert( gamma_move(board, 30, 5, 9) == 1 );
assert( gamma_move(board, 14, 7, 6) == 1 );
assert( gamma_move(board, 1, 8, 7) == 1 );
assert( gamma_move(board, 26, 8, 6) == 1 );
assert( gamma_move(board, 17, 9, 1) == 1 );
assert( gamma_move(board, 28, 1, 3) == 1 );
assert( gamma_move(board, 16, 6, 1) == 1 );
assert( gamma_move(board, 23, 3, 0) == 1 );
assert( gamma_move(board, 15, 2, 5) == 1 );
assert( gamma_move(board, 25, 7, 7) == 1 );
assert( gamma_move(board, 24, 7, 8) == 1 );
assert( gamma_move(board, 11, 9, 2) == 1 );
assert( gamma_move(board, 14, 5, 6) == 1 );
assert( gamma_move(board, 4, 1, 7) == 1 );
assert( gamma_move(board, 8, 2, 0) == 1 );
assert( gamma_move(board, 17, 5, 7) == 1 );
assert( gamma_move(board, 11, 5, 0) == 1 );
assert( gamma_move(board, 8, 2, 7) == 1 );
assert( gamma_move(board, 8, 2, 2) == 1 );
assert( gamma_move(board, 18, 7, 0) == 1 );
assert( gamma_move(board, 24, 7, 5) == 1 );
assert( gamma_move(board, 23, 5, 5) == 1 );
assert( gamma_move(board, 2, 8, 8) == 1 );
assert( gamma_move(board, 18, 6, 0) == 1 );
assert( gamma_move(board, 16, 8, 3) == 1 );
assert( gamma_move(board, 9, 8, 1) == 1 );
assert( gamma_move(board, 23, 0, 1) == 1 );
assert( gamma_move(board, 3, 9, 3) == 1 );
assert( gamma_move(board, 17, 6, 2) == 1 );
assert( gamma_move(board, 22, 2, 8) == 1 );
assert( gamma_move(board, 23, 3, 7) == 1 );
assert( gamma_move(board, 10, 9, 0) == 1 );
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_move(board, 17, 9, 6) == 1 );
assert( gamma_move(board, 23, 1, 9) == 1 );
assert( gamma_move(board, 16, 8, 4) == 1 );
assert( gamma_move(board, 9, 9, 7) == 1 );
assert( gamma_move(board, 6, 1, 2) == 1 );
assert( gamma_move(board, 19, 3, 5) == 1 );
assert( gamma_move(board, 26, 6, 4) == 1 );
assert( gamma_move(board, 27, 7, 4) == 1 );
assert( gamma_move(board, 3, 3, 6) == 1 );
assert( gamma_move(board, 9, 0, 6) == 1 );
assert( gamma_move(board, 6, 4, 0) == 1 );
assert( gamma_move(board, 1, 7, 9) == 1 );
assert( gamma_move(board, 18, 4, 6) == 1 );
assert( gamma_move(board, 24, 0, 7) == 1 );
assert( gamma_move(board, 10, 7, 3) == 1 );
assert( gamma_move(board, 12, 4, 1) == 1 );
assert( gamma_move(board, 24, 9, 5) == 1 );
assert( gamma_move(board, 21, 5, 3) == 1 );
assert( gamma_move(board, 26, 3, 1) == 1 );
assert( gamma_move(board, 29, 1, 5) == 1 );
assert( gamma_move(board, 9, 7, 2) == 1 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_move(board, 18, 6, 5) == 1 );
assert( gamma_move(board, 27, 2, 6) == 1 );
assert( gamma_move(board, 15, 3, 3) == 1 );
assert( gamma_move(board, 26, 1, 4) == 1 );
assert( gamma_move(board, 7, 4, 9) == 1 );
assert( gamma_move(board, 29, 9, 4) == 1 );
assert( gamma_move(board, 3, 5, 2) == 1 );
assert( gamma_move(board, 10, 4, 8) == 1 );
assert( gamma_move(board, 3, 3, 9) == 1 );
assert( gamma_move(board, 1, 8, 0) == 1 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_move(board, 13, 1, 0) == 1 );
assert( gamma_move(board, 21, 2, 4) == 1 );
assert( gamma_move(board, 12, 4, 7) == 1 );
assert( gamma_move(board, 9, 3, 4) == 1 );
assert( gamma_move(board, 21, 6, 6) == 1 );
assert( gamma_move(board, 21, 4, 4) == 1 );
assert( gamma_move(board, 12, 0, 8) == 1 );
assert( gamma_move(board, 13, 6, 9) == 1 );
assert( gamma_move(board, 6, 8, 9) == 1 );
assert( gamma_move(board, 12, 9, 9) == 1 );
assert( gamma_move(board, 7, 1, 8) == 1 );
assert( gamma_move(board, 23, 0, 3) == 1 );
assert( gamma_move(board, 6, 9, 8) == 1 );
assert( gamma_move(board, 29, 0, 4) == 1 );
assert( gamma_move(board, 16, 4, 5) == 1 );
assert( gamma_move(board, 2, 8, 2) == 1 );
assert( gamma_move(board, 25, 4, 2) == 1 );
assert( gamma_move(board, 22, 2, 9) == 1 );


gamma_delete(board);

    return 0;
}
