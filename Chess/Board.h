#ifndef board_h
#define board_h
#include "Piece.h"
class Board{
/*
 Data structure to store what piece is on each square
    Can do array
 More complex data structure can be used to more easily
    accomodate piece movement algorithms
 */

public:
    Board();         // Base constructor
    void draw();     // Draw ASCII chess board
    void update(Piece&);	 // Update board with new positions
private:
    char squares[64];
    int sqToModify;
};

#endif