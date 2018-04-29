#ifndef board_h
#define board_h

#include <string>
#include <iostream>

class Board{
// This should be a dumb data structure
// All the move logic should be in a diff. class
// So this just stores piece info and calls the
// appropriate move functions on the pieces
public:
    Board(std::string fen);      
    Board();         		 
    void move(int pos1, int pos2);    // Play move
    void draw();    // Draw board
    void update();

private:
	int NUMSQUARES;
	char pieceChars[64];
};

#endif
