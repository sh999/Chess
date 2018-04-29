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
    std::string getExpandedFen();		// return string of fen position, with '_' as space characters
private:
	int NUMSQUARES;
	char pieceChars[64];
	std::string expandedFen; // Fen string with numbers converted to '_' as spaces
	void changeSquare(int src, int dest, std::string& fen); // put 'piece' in square; also used to 'delete' piece from square by setting it to blank
};

#endif
