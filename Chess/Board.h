#ifndef board_h
#define board_h
#include "Piece.h"

// Forward declaration to prevent circular includes
class PiecePositions;
class Board{
/*
 Data structure to store what piece is on each square
 More complex data structure can be used to more easily
    accomodate piece movement algorithms
 */

public:
    Board();         // Base constructor
    void draw();     // Draw ASCII chess board
    void update(Piece &p);	 // Update board with new position of a piece
private:
    char squares[64];
    int sqToModify;
};

#endif