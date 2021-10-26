#include <stdio.h>

#define BOARD_LEN 8

typedef enum {
    EMPTY, 
    PAWN, 
    BISHOP, 
    KNIGHT, 
    ROOK, 
    QUEEN, 
    KING
} Piece;

typedef enum {
    BLACK, 
    WHITE
} Color;

typedef struct {
    Piece piece_type;
    Color piece_color; 
} Square;

Square board[BOARD_LEN][BOARD_LEN];

board = {
    { 
        (Square) {ROOK, WHITE},
        (Square) {KNIGHT, WHITE}, 
        (Square) {BISHOP, WHITE}, 
        (Square) {QUEEN, WHITE}, 
        (Square) {KING, WHITE}, 
        (Square) {BISHOP, WHITE}, 
        (Square) {KNIGHT, WHITE}, 
        (Square) {ROOK, WHITE},
    },
    {
        (Square) {PAWN, WHITE},
        (Square) {PAWN, WHITE},
        (Square) {PAWN, WHITE},
        (Square) {PAWN, WHITE},
        (Square) {PAWN, WHITE},
        (Square) {PAWN, WHITE},
        (Square) {PAWN, WHITE},
        (Square) {PAWN, WHITE},
    },
    {
        (Square) {EMPTY, BLACK},
        (Square) {EMPTY, BLACK},
        (Square) {EMPTY, BLACK},
        (Square) {EMPTY, BLACK},
        (Square) {EMPTY, BLACK},
        (Square) {EMPTY, BLACK},
        (Square) {EMPTY, BLACK},
        (Square) {EMPTY, BLACK},
    },
    {
        (Square) {EMPTY, BLACK},
        (Square) {EMPTY, BLACK},
        (Square) {EMPTY, BLACK},
        (Square) {EMPTY, BLACK},
        (Square) {EMPTY, BLACK},
        (Square) {EMPTY, BLACK},
        (Square) {EMPTY, BLACK},
        (Square) {EMPTY, BLACK},
    },
    {
        (Square) {EMPTY, BLACK},
        (Square) {EMPTY, BLACK},
        (Square) {EMPTY, BLACK},
        (Square) {EMPTY, BLACK},
        (Square) {EMPTY, BLACK},
        (Square) {EMPTY, BLACK},
        (Square) {EMPTY, BLACK},
        (Square) {EMPTY, BLACK},
    },
    {
        (Square) {EMPTY, BLACK},
        (Square) {EMPTY, BLACK},
        (Square) {EMPTY, BLACK},
        (Square) {EMPTY, BLACK},
        (Square) {EMPTY, BLACK},
        (Square) {EMPTY, BLACK},
        (Square) {EMPTY, BLACK},
        (Square) {EMPTY, BLACK},
    },
    {
        (Square) {PAWN, BLACK},
        (Square) {PAWN, BLACK},
        (Square) {PAWN, BLACK},
        (Square) {PAWN, BLACK},
        (Square) {PAWN, BLACK},
        (Square) {PAWN, BLACK},
        (Square) {PAWN, BLACK},
        (Square) {PAWN, BLACK},
    },
    { 
        (Square) {ROOK, BLACK},
        (Square) {KNIGHT, BLACK}, 
        (Square) {BISHOP, BLACK}, 
        (Square) {QUEEN, BLACK}, 
        (Square) {KING, BLACK}, 
        (Square) {BISHOP, BLACK}, 
        (Square) {KNIGHT, BLACK}, 
        (Square) {ROOK, BLACK},
    },
}