#ifndef board_h
#define board_h
#include <string>
#include <iostream>

class Board{
/*
 Board is a data structure to store what piece is on each square
 Currently it is a very simple implementation, with the identity
  of each square stored in a char[].
 More complex data structure can be used to more easily
    accomodate piece movement algorithms
 */
public:
    Board(std::string fen);         		 // Base constructor
    Board();         		 // Base constructor
    void move();    // Play move
    void draw();    // Draw board
private:
	int NUMSQUARES;
	char pieceChars[64];
};

#endif
