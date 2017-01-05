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
void test_parse_move();
int main(int argc, char* argv[])
{
	string test_or_game;	// user cmd line argument for test or game
	if(argc == 1){ 			// if run without args, run game and not testing by default
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
		// game();
		test_parse_move();
	}
}

void test_parse_move(){
	/*
		Test selection of piece in prep for moving pieces
	*/
	Positions startingPosition("rrrrrrrR888888pppppppp");		// Use FEN-like notation to set starting positions
    Board board(startingPosition);  					// Pass the position obj to Board constructor to create Board with the given positions
    board.draw();										// Draw board with updated pieces
    board.move_by_ints(3,11); // Move piece on square 3 to square 11
    board.draw();
    board.move_by_ints(3,11);
    board.draw();
    cout << board.movestringToNum("a4");

}

void set_simple_pieces(){
	/*
		Set board with rooks and pawns in rank 8
		Will modify this function to be a unit test
		Currently not called by anything; copied from game()
	*/
	Board board;
    Positions startingPosition("rrrrrrrrpppppppp");		// Use FEN-like notation to set starting positions
    // board.draw();									// Draw empty board
//    startingPosition.sendPiecesToBoard(board);		// Puts created pieces on board
    PieceSetter pieceSetter;					
    pieceSetter.sendPiecesToBoard(startingPosition, board); // Given a starting position, sets the pieces to the board
    board.draw();	
}

void game(){
	/*
		Normal game with conventional positions
	*/
    Positions startingPosition("rrrrrrrr888888pppppppp");		// Use FEN-like notation to set starting positions
    Board board(startingPosition);  					// Pass the position obj to Board constructor to create Board with the given positions
    board.draw();										// Draw board with updated pieces
    board.move("a1 a2");
    /*
    */
}