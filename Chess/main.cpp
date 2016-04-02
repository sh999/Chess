#include <iostream>
#include "Piece.h"
#include "Pawn.h"
#include "Board.h"
#include "Positions.h"
#include "PieceSetter.h"
#include "UnitTest.h"
#include <string>
using namespace std;
void game();

int main(int argc, char* argv[])
{
	string testOrGame;	// user cmd line argument for test or game
	if(argc == 1){ // if just running ./main, run game by default
		game();
		cout << "argc = " << argc;
	}
	else{
		testOrGame = argv[1];
	}
	if(testOrGame == "test"){
		cout << "Commence unit testing" << endl;
		UnitTest unitTests;
		unitTests.test();
	}
	else if(testOrGame == "game" || argc == 1){
		
		game();
	}
}

void game(){
    Board board;
    Positions startingPosition("rppprrr");		// Use FEN-like notation to set starting positions
    board.draw();
//    startingPosition.sendPiecesToBoard(board);		// Puts created pieces on board
    PieceSetter ps;
    ps.sendPiecesToBoard(startingPosition, board);
    board.draw();
}