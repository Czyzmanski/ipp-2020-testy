#include <stdint.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include "gamma.h"
#include <stdbool.h>
#include <string.h>


int main() {

/*
scenario: test_random_actions
uuid: 668497574
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(5, 6, 3, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_move(board, 2, 0, 0) == 1 );


char* board982604264 = gamma_board(board);
assert( board982604264 != NULL );
assert( strcmp(board982604264, 
"..1..\n"
".....\n"
".....\n"
".....\n"
".1...\n"
"2....\n") == 0);
free(board982604264);
board982604264 = NULL;
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_free_fields(board, 3) == 24 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_free_fields(board, 1) == 23 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_free_fields(board, 3) == 21 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_free_fields(board, 3) == 20 );
assert( gamma_golden_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_free_fields(board, 1) == 19 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_free_fields(board, 3) == 16 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_free_fields(board, 2) == 14 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_golden_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_free_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );


char* board620060925 = gamma_board(board);
assert( board620060925 != NULL );
assert( strcmp(board620060925, 
".1112\n"
"31332\n"
".111.\n"
"331.3\n"
"11133\n"
"2.311\n") == 0);
free(board620060925);
board620060925 = NULL;
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_golden_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_golden_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 3, 4, 4) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 14 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 14 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );


gamma_delete(board);

    return 0;
}
