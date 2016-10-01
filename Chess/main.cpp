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
	string test_or_game;	// user cmd line argument for test or game
	if(argc == 1){ 		// if just running ./main, run game and not testing by default
		game();
	}
	else{
		test_or_game = argv[1];
	}
	if(test_or_game == "test"){
		cout << "Running unit testing" << endl;
		UnitTest unitTests;
		unitTests.test();
	}
	else if(test_or_game == "game" || argc == 1){
		game();
	}
}

void game(){
	/*
		Normal game with conventional positions
	*/
    Board board;
    Positions startingPosition("rrrrrrrrpppppppp");		// Use FEN-like notation to set starting positions
    // board.draw();								// Draw empty board
//    startingPosition.sendPiecesToBoard(board);		// Puts created pieces on board
    PieceSetter pieceSetter;					
    pieceSetter.sendPiecesToBoard(startingPosition, board); // Given a starting position, sets the pieces to the board
    board.draw();								// Draw board with updated pieces
}