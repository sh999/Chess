/*
 Tasks:
    Create vector of pieces in PiecePositions
 */
#include <iostream>
#include "Piece.h"
#include "Pawn.h"
#include "Board.h"
#include "PiecePositions.h"
using namespace std;

int main()
{
    Board board;
    PiecePositions startingPosition("/pppppppp////pppppppp/");
    board.draw();
    startingPosition.sendPiecesToBoard(board);
    board.draw();
}

