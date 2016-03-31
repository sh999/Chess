#include <iostream>
#include "Piece.h"
#include "Pawn.h"
#include "Board.h"
#include "PiecePositions.h"
#include "PieceSetter.h"

using namespace std;

int main()
{
    Board board;
    PiecePositions startingPosition("rppprrr");		// Use FEN-like notation to set starting positions
    board.draw();
//    startingPosition.sendPiecesToBoard(board);		// Puts created pieces on board
    PieceSetter ps;
    ps.sendPiecesToBoard(startingPosition, board);
    board.draw();
}

