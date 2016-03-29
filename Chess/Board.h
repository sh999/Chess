#ifndef board_h
#define board_h
#include "Piece.h"

// Forward declaration to prevent circular includes
class PiecePositions;
class Board{
/*
 Board is a data structure to store what piece is on each square
 Currently it is a very simple implementation, with the identity
  of each square stored in a char[].
 More complex data structure can be used to more easily
    accomodate piece movement algorithms
 */

public:
    Board();         // Base constructor
    void draw();     // Draw ASCII chess board
    void update(Piece *p);	 // Update board with new position of a piece
private:
    char squares[64]; // Holds piece identity for all squares
    int sqToModify;
};

#endif
