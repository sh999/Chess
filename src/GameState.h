#ifndef gamestate_h
#define gamestate_h

#include <string>
#include <iostream>
#include "Board.h"

class GameState{
public:
	GameState(std::string fen);
	GameState();
	void update();	// Update data like board position
	void draw();	// Draw on screen
	Board b(std::string s);
private:
	// Board::Board board;
};
#endif