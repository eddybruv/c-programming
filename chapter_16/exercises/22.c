#include <stdio.h>

enum chess_pieces{KING, QUEEN, ROOK, BISHOP, KNIGHT, PAWN};

//(A)
const enum chess_pieces piece_value[] = {200, 9, 5, 3, 3, 1};

//(B)
const enum chess_pieces piece_value2[] = {
    [KING] = 200, 
    [QUEEN] = 9,
    [BISHOP] = 3,
    [ROOK] = 5, 
    [KNIGHT] = 3,
    [PAWN] = 1
};