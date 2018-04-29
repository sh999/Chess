#ifndef gamestate_h
#define gamestate_h

#include <string>
#include <iostream>
#include "Board.h"

class BoardManager{

public:
	BoardManager(std::string fen);
	BoardManager();
	void move(int pos1, int pos2); // Wrapper for calling Board move()
	void update();	// Update data like board position
	void draw();	// Draw on screen

private:
	// Board board(std::string s);
	Board board;
	bool isLegalMove(std::string pieces, int pos1, int po2); // CHeck if move from pos1 to pos2 is legal given board string pieces
	// Board::Board board;
};

#endif