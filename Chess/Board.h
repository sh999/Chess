#ifndef board_h
#define board_h
#include "Piece.h"
//#include "PiecePositions.h"

class PiecePositions;
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
    void update(Piece &p);	 // Update board with new position of a piece
    void updateMultiple(PiecePositions &pp);    // Update board with multiple pieces; used in start of game to set up initial positions
private:
    char squares[64];
    int sqToModify;
};

#endif