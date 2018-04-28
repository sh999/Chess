#ifndef board_h
#define board_h
#include "Piece.h"
#include "Positions.h"
#include <iostream>

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
    Board();         		 // Base constructor
    Board(Positions p);		 // Alternate constructor that takes in positions
    void draw();     		 // Draw ASCII chess board
    void update(Piece *p);	 // Update board with new position of a piece
    void move(string move_string);			 // Enact the move expressed as the string
    void select_by_int(int num_pos);		 // Give info on what the square on integer tag is
    void move_by_ints(int pos1, int pos2);   // Move a piece from square pos1 to pos2; for now work with ints; later work w/ actual string move
    int movestringToNum(string pos_string);   // Convert string position to numerical board position
private:
    char squares[64];        // Holds piece identity for all squares; not the piece obj but the char representation
    int sqToModify;          // Each square is represented with integer tags

};

#endif
